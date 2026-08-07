#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputI2S            i2s1;           //xy=165,73
AudioEffectGranular      granular1;      //xy=186,197
AudioAnalyzeNoteFrequency notefreq1;      //xy=368,49
AudioFilterBiquad        biquad2;        //xy=382,199
AudioMixer4              mixer1;         //xy=540,146
AudioFilterBiquad        biquad1;        //xy=679,148
AudioOutputI2S           i2s2;           //xy=890,152
AudioConnection          patchCord1(i2s1, 1, granular1, 0);
AudioConnection          patchCord2(i2s1, 1, notefreq1, 0);
AudioConnection          patchCord3(i2s1, 1, mixer1, 0);
AudioConnection          patchCord4(granular1, biquad2);
AudioConnection          patchCord5(biquad2, 0, mixer1, 1);
AudioConnection          patchCord6(mixer1, biquad1);
AudioConnection          patchCord7(biquad1, 0, i2s2, 0);
// GUItool: end automatically generated code

