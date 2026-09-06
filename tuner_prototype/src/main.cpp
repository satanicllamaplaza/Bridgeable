


#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputI2S            i2s1;           //xy=265,188
AudioAnalyzeNoteFrequency notefreq1;      //xy=439,277
AudioOutputI2S           i2s2;           //xy=635,220
AudioConnection          patchCord1(i2s1, 0, notefreq1, 0);
AudioConnection          patchCord2(i2s1, 0, i2s2, 0);
AudioConnection          patchCord3(i2s1, 0, i2s2, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=444,345
// GUItool: end automatically generated code



void setup() {
  Serial.begin(9600);

  AudioMemory(24);

  sgtl5000_1.enable();

  // Headphone volume
  sgtl5000_1.volume(0.9);

  // Use LINE IN
  sgtl5000_1.inputSelect(AUDIO_INPUT_LINEIN);

  delay(1000);
}

void loop() {
  if (notefreq1.available()) {
    float note = notefreq1.read();
    float prob = notefreq1.probability();
    Serial.print("note = ");
    Serial.print(note, 3);
    Serial.print(", probability = ");
    Serial.println(prob);
  }
}
