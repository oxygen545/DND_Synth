#include "main.h"

static const uint16_t EEPROM_SIZE = EEPROM.length();

static const unsigned long presetSize = sizeof(VoiceData);

// ROM Defines
#define MAX_BANKS ((EEPROM.length() - ROM_FIRST_PRESET_ADDR) / presetSize)

/**
 * @brief Synth Voice that Contains pretty much everything
 *
 */
SynthVoice::SynthVoice()
{
    for (int i = 0; i < NUM_OSCILLATORS; i++)
    {
        Osc[i] = new Oscil<NUM_CELLS, AUDIO_RATE>(WAVE_DATA0);
    }
    for (int i = 0; i < NUM_ENVELOPES; i++)
    {
        Envelope[i] = new ADSR<CONTROL_RATE, AUDIO_RATE, unsigned long>();
    }
    for (uint8_t i = 0; i < 127; i++)
    {
        keyDown[i] = 0;
    }
    initWaveTables();
#ifdef FIRST_INIT
    FirstInit();
#else
    load(0);
#endif
}

void SynthVoice::initWaveTables()
{
    waveTable[0] = WAVE_DATA0;
    waveTable[1] = WAVE_DATA1;
    waveTable[2] = WAVE_DATA2;
    waveTable[3] = WAVE_DATA3;
    waveTable[4] = WAVE_DATA4;
    waveTable[5] = WAVE_DATA5;
    waveTable[6] = WAVE_DATA6;
    waveTable[7] = WAVE_DATA7;
    waveTable[8] = WAVE_DATA8;
    waveTable[9] = WAVE_DATA9;
    waveTable[10] = WAVE_DATA10;
    waveTable[11] = WAVE_DATA11;
    waveTable[12] = WAVE_DATA12;
    waveTable[13] = WAVE_DATA13;
    waveTable[14] = WAVE_DATA14;
    waveTable[15] = WAVE_DATA15;
    waveTable[16] = WAVE_DATA16;
    waveTable[17] = WAVE_DATA17;
    waveTable[18] = WAVE_DATA18;
    waveTable[19] = WAVE_DATA19;
    waveTable[20] = WAVE_DATA20;
    waveTable[21] = WAVE_DATA21;
}
SynthVoice::~SynthVoice()
{
    for (int i = 0; i < NUM_OSCILLATORS; i++)
    {
        delete Osc[i];
    }
    for (int i = 0; i < NUM_ENVELOPES; i++)
    {
        delete Envelope[i];
    }
}

void SynthVoice::setFreqs(Q8n8 midi_note)
{
    for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
    {
        switch (voiceData.scale[i])
        {
        case 0:
            freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * (voiceData.coarse[i] + voiceData.fine[i]);
            break;
        case 1:
            freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * ((voiceData.coarse[i] + voiceData.fine[i]) / 10.f);
            break;
        case 2:
            freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * ((voiceData.coarse[i] + voiceData.fine[i]) / 100.f);
            break;
        case 3:
            freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * ((voiceData.coarse[i] + voiceData.fine[i]) / 1000.f);
            break;
        case 4:
            freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * ((voiceData.coarse[i] + voiceData.fine[i]) / 10000.f);
            break;
        }
        Osc[i]->setFreq(freqs[i]);
    }
}

void SynthVoice::start(byte c, byte p, byte v)
{
    pitch = p;
    channel = c;
    velocity = v;
    setFreqs(pitch);
    for (int i = 0; i < NUM_ENVELOPES; i++) // 3 Envelopes
    {
        Envelope[i]->setAttackLevel((voiceData.attackLevel[i] * velocity) >> 7);
        Envelope[i]->setDecayLevel((voiceData.decayLevel[i] * velocity) >> 7);
        Envelope[i]->setSustainLevel((voiceData.sustainLevel[i] * velocity) >> 7);
        Envelope[i]->setReleaseLevel((voiceData.releaseLevel[i] * velocity) >> 7);
        if (voiceData.hasRetrigger[i])
        {
            Envelope[i]->noteOn(true);
        }
        else
        {
            Envelope[i]->noteOn(false);
        }
    }
    keyDown[p] = true;
}

void SynthVoice::stop(byte p)
{
    if (keyDown[p])
    {
        for (int i = 0; i < NUM_ENVELOPES; i++)
        {
            Envelope[i]->noteOff();
            pitch = 0;
            channel = 0;
            velocity = 0;
        }
        keyDown[p] = false;
    }
}

void SynthVoice::setTimes()
{
    for (uint8_t i = 0; i < NUM_ENVELOPES; i++)
    {
        Envelope[i]->setTimes(voiceData.attackTime[i] * pow(10, voiceData.attackScale[i]), voiceData.decayTime[i] * pow(10, voiceData.decayScale[i]), voiceData.sustainTime[i] * pow(10, voiceData.sustainScale[i]), voiceData.releaseTime[i] * pow(10, voiceData.releaseScale[i]));
    }
}

void SynthVoice::setLevels()
{
    for (uint8_t i = 0; i < NUM_ENVELOPES; i++)
    {
        if (velocity)
        {
            Envelope[i]->setLevels((voiceData.attackLevel[i] * velocity) >> 7, (voiceData.decayLevel[i] * velocity) >> 7, (voiceData.sustainLevel[i] * velocity) >> 7, (voiceData.releaseLevel[i] * velocity) >> 7);
        }
        else
        {
            Envelope[i]->setLevels(voiceData.attackLevel[i], voiceData.decayLevel[i], voiceData.sustainLevel[i], voiceData.releaseLevel[i]);
        }
    }
}

void SynthVoice::FirstInit()
{
#ifdef DEBUG_SAVE
    Serial.println("FirstInit");
#endif
    uint16_t l = EEPROM.length();
    // Checks ROM version
    if (EEPROM.read(ROM_MAJOR_ADDR) == ROM_MAJOR_NUM)
    {
        if (EEPROM.read(ROM_MINOR_ADDR) == ROM_MINOR_NUM)
        {
            if (EEPROM.read(ROM_REVISION_ADDR) == ROM_REVISION_NUM)
            {
                // Success load a preset and return
                load(0);
                return;
            }
        }
    }
    // failed ROM version check
    for (uint16_t i = 0; i < l; i++)
    { // erase eeprom
        EEPROM.write(i, 0);
    }
    // Set ROM version
    EEPROM.write(ROM_MAJOR_ADDR, ROM_MAJOR_NUM);
    EEPROM.write(ROM_MINOR_ADDR, ROM_MINOR_NUM);
    EEPROM.write(ROM_REVISION_ADDR, ROM_REVISION_NUM);
    EEPROM.write(ROM_NUM_PRESET_ADDR, MAX_BANKS);
    EEPROM.put(ROM_FIRST_PRESET_ADDR, voiceData);
}

bool SynthVoice::load(uint8_t idx)
{

    // uint8_t majVer = EEPROM.read(ROM_MAJOR_ADDR);    // get the version number for the preset for future versioning issues
    // uint8_t minVer = EEPROM.read(ROM_MINOR_ADDR);    // get the version number for the preset for future versioning issues
    // uint8_t revVer = EEPROM.read(ROM_REVISION_ADDR); // get the version number for the preset for future versioning issues
    if (MAX_BANKS <= idx)
    {
        // Load Failed idx to large
        return false;
    }
    int Addr = ROM_FIRST_PRESET_ADDR + (idx * presetSize); // the address we will use to store the data
    EEPROM.get(Addr, voiceData);
    for (int i = 0; i < NUM_OSCILLATORS; i++)
    {
        setWaveshape(voiceData.wave_shape[i], i);
    }
    setFreqs(pitch);
    setTimes();
    setLevels();
    return true;
}

bool SynthVoice::save(uint8_t idx)
{
#ifdef DEBUG_SAVE
    Serial.println("saveFcn");
#endif

    // uint8_t majver = EEPROM.read(ROM_MAJOR_ADDR);          // get the version number for the preset for future versioning issues
    // uint8_t minver = EEPROM.read(ROM_MINOR_ADDR);          // get the version number for the preset for future versioning issues
    // uint8_t revver = EEPROM.read(ROM_REVISION_ADDR);       // get the version number for the preset for future versioning issues
    int Addr = ROM_FIRST_PRESET_ADDR + (idx * presetSize); // the address we will use to store the data
    voiceData.index = idx;                                 // set this Prest to this index because we are saving this preset we will set the current voicedata index to this new one, saving makes it current
    voiceData.version[0] = ROM_MAJOR_NUM;
    voiceData.version[1] = ROM_MINOR_NUM;
    voiceData.version[2] = ROM_REVISION_NUM;
    EEPROM.put(Addr, voiceData); // Save the Preset
#ifdef DEBUG_SAVE
    Serial.print("svd:");
    Serial.println(idx);
    Serial.flush();
#endif
    return true;
}

// WAVESHAPE
void SynthVoice::setWaveshape(uint8_t shape, uint8_t id)
{
    if (shape < NUM_WAVETABLES)
    {
        voiceData.wave_shape[id] = shape;
        Osc[id]->setTable(waveTable[shape]);
    }
}