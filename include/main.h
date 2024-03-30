#ifndef __MAIN_H__
#define __MAIN_H__
#include <Arduino.h>
#include "SynthVoice.h"


//           DEFINES
// #define FIRST_INIT 1
// #define DEBUG_PRINT 1
// #define DEBUG_SAVE
// #define PRINT_VOICEINFO 1
// #define PRINT_CC 1
// #define PRINT_PC
// #define SEND_MIDI
// #define USE_SYSEX
// #define USE_AFTERTOUCH
// #define USE_CHANNEL_PRESSURE
// #define USE_SYSEX
// #define USE_UNHANDLED_MIDI


/*
/            CONSTANTS
*/
// static const uint8_t POT0_PIN = A0;
// static const uint8_t POT1_PIN = A1;
// static const uint8_t POT2_PIN = A2;
// static const uint8_t POT3_PIN = A3;
// static const uint8_t POT4_PIN = A6;


/*
/            GLOBALS
*/
// RESEARCH NOTE  not sure how to send to All Channels via OMNI
// zero based 0-15


const char *pitch_name(byte pitch);
int pitch_octave(byte pitch);
void noteOn(byte channel, byte pitch, byte velocity);
void noteOff(byte channel, byte pitch, byte velocity);
void controlChange(byte channel, byte control, byte value);
void pitchBend(byte channel, byte lsb, byte msb);
void handleMidi();
void PrintVoiceInfo();
void setWaveshape(uint8_t shape, uint8_t id);
// decare reset fucntion
// void (*resetFunc)(void) = 0; // declare reset function at address 0

#endif  // __MAIN_H__