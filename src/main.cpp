#include "main.h"
#include "DNDChar.h"
#define MAX_CHARACTERS 4
uint8_t midiReceiveChannel = 0;
uint8_t midiTransmitChannel = 1;
uint32_t MidiClock = 0;
bool clockRunning = false;
// unsigned long potData[5] = {0UL, 0UL, 0UL, 0UL, 0UL};

SynthVoice Voice;
DNDChar Characters[MAX_CHARACTERS];

// put function declarations here:

void setup()
{
  Serial.begin(115200); // set up the Serial output so we can look at the debug stuff
  for (uint8_t i = 0; i < MAX_CHARACTERS; i++)
  {
    Characters[i].Generate();
  }
  Voice.load(0);
  startMozzi(CONTROL_RATE);
}

void loop()
{
  audioHook();
}

int updateAudio()
{
  return Voice.Osc[0]->next();
}

void updateControl()
{
}