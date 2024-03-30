#ifndef __SYNTHVOICE_H__
#define __SYNTHVOICE_H__
#include <Arduino.h>
#include <EEPROM.h>
#include <MIDIUSB.h>
#include <MozziGuts.h>
#include <Oscil.h> // oscillator
#include <ADSR.h>
#include <mozzi_midi.h>
#include <AKWF/AKWFTables.h>

#ifdef CONTROL_RATE
#undef CONTROL_RATE
#define CONTROL_RATE 2048
#endif

#define NUM_OSCILLATORS 2
#define NUM_ENVELOPES 2

#define APP_NAME F("DNDCHAR")
#define ROM_MAJOR_NUM 2
#define ROM_MINOR_NUM 1
#define ROM_REVISION_NUM 0

// EEPROM Major Version Number
#define ROM_MAJOR_ADDR 0UL
// EEPROM Minor Version Number
#define ROM_MINOR_ADDR 1UL
// EEPROM Build Version Number
#define ROM_REVISION_ADDR 2UL
// 40 bytes reserved for the future
#define ROM_RESERVED_0 3UL
#define ROM_RESERVED_1 4UL
#define ROM_RESERVED_2 5UL
#define ROM_RESERVED_3 6UL
// Total number of Presets stored
#define ROM_NUM_PRESET_ADDR 8UL
// Address of the first Preset
#define ROM_FIRST_PRESET_ADDR 9UL
#define ROM_RESERVED_4 7UL

// DO NOT CHANGE UNLESS YOU WANT TO LOSE ALL THE PRESETS
// DO NOT CHANGE UNLESS YOU WANT TO LOSE ALL THE PRESETS
// DO NOT CHANGE UNLESS YOU WANT TO LOSE ALL THE PRESETS
struct VoiceData
{
    uint8_t index = 0;
    uint8_t version[3]{ROM_MAJOR_NUM, ROM_MINOR_NUM, ROM_REVISION_NUM};
    uint8_t scale[NUM_ENVELOPES];
    int8_t tune[NUM_OSCILLATORS];
    float coarse[NUM_OSCILLATORS];
    float fine[NUM_OSCILLATORS];
    int8_t transpose = 0; // 0-127 = -24 to 24 notes (2 octaves)
    uint8_t wave_shape[NUM_OSCILLATORS];
    uint8_t algorithm = 0;
    bool hasRetrigger[NUM_OSCILLATORS];
    uint8_t phase_shift[NUM_OSCILLATORS];
    // Modulator
    uint8_t mod_depth[NUM_OSCILLATORS];

    // Envelope
    uint8_t attackScale[NUM_ENVELOPES];
    int16_t decayScale[NUM_ENVELOPES];
    int16_t sustainScale[NUM_ENVELOPES];
    int16_t releaseScale[NUM_ENVELOPES];

    ulong attackTime[NUM_ENVELOPES];
    ulong decayTime[NUM_ENVELOPES];
    ulong sustainTime[NUM_ENVELOPES];
    ulong releaseTime[NUM_ENVELOPES];
    uint8_t attackLevel[NUM_ENVELOPES];
    uint8_t decayLevel[NUM_ENVELOPES];
    uint8_t sustainLevel[NUM_ENVELOPES];
    uint8_t releaseLevel[NUM_ENVELOPES];
};

/**
 * @brief Synth Voice that Contains pretty much everything
 *
 */
class SynthVoice
{
public:
    Oscil<NUM_CELLS, AUDIO_RATE> *Osc[NUM_OSCILLATORS];
    ADSR<CONTROL_RATE, AUDIO_RATE, unsigned long> *Envelope[NUM_ENVELOPES];
    VoiceData voiceData;
    uint8_t channel = 0;
    uint8_t pitch = 0;
    float freqs[NUM_OSCILLATORS];
    uint8_t velocity = 0;
    bool keyDown[127];
    const int8_t *waveTable[NUM_WAVETABLES];
    SynthVoice();
    ~SynthVoice();
    void initWaveTables();
    void setFreqs(Q8n8 midi_note);
    void start(byte c, byte p, byte v);
    void stop(byte p);
    void setTimes();
    void setLevels();
    void FirstInit();
    bool load(uint8_t idx);
    bool save(uint8_t idx);
    void setWaveshape(uint8_t shape, uint8_t id);
};

#endif // __SYNTHVOICE_H__