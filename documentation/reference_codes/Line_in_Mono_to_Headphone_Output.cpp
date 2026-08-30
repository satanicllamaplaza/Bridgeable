
/* Line in Mono to Headphone Output
    This reference file shows how to take a direct mono input
    from left input and ruote it directly to Headphone output.

    No Fancy Processing Just raw audio.
    Demo was done with bass guitar with active pickups.
*/

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputI2S            i2s2;
AudioOutputI2S           i2s1;

AudioConnection          patchCord1(i2s2, 0, i2s1, 0);
AudioConnection          patchCord2(i2s2, 0, i2s1, 1);

AudioControlSGTL5000     sgtl5000_1;
// GUItool: end automatically generated code

void setup() {
  Serial.begin(9600);

  AudioMemory(8);

  sgtl5000_1.enable();

  // Headphone volume
  sgtl5000_1.volume(0.9);

  // Use LINE IN
  sgtl5000_1.inputSelect(AUDIO_INPUT_LINEIN);

  delay(1000);
}

void loop() {
}
