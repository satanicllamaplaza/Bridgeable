
Bridgable is an open-source assistive audio device for musicians with hearing loss. It accepts a standard instrument
input, splits the signal into a clean output for the house and a processed monitor output for the performer.
The processed output can shift selected frequencies into a more audible range with low latency. The long-term
goal is an affordable, open-source platform that musicians can build to assist them with hearing impairments.

# lumo teensy 4.1 plan
```
┌──────────────────────────────────────────┐
│              BRIDGE TONE                 │
│                                          │
│  ┌────────┐                    ┌──────┐  │
│  │ 1/4"   │   [Buffer]  [Split]│ 1/4" │  │
│  │ INPUT  │──→ [Preamp]──→┬───→│HOUSE │  │
│  │ JACK   │               │    │ OUT  │  │
│  └────────┘               │    └──────┘  │
│                           │              │
│                           ↓    ┌──────┐  │
│                       [Teensy 4.1]    │  │
│                       [Audio Board]   │  │
│                            │   │ 1/4" │  │
│                            │   │ MONI-│  │
│                            └──→│ TOR  │  │
│                                │ OUT  │  │
│                                └──────┘  │
│  ┌──────────────────────────────────┐    │
│  │ [OLED] [Blend Knob] [Freq Knob]  │    │
│  └──────────────────────────────────┘    │
│                                          │
│  ┌──────────────────┐                    │
│  │ 9v Power         │                    │
│  └──────────────────┘                    │
└──────────────────────────────────────────┘
```

# Parts list:
### board

https://www.sparkfun.com/teensy-4-1-without-ethernet-headers.html

### audio hat

https://www.sparkfun.com/teensy-4-audio-shield-rev-d.html

### Screen

https://www.sparkfun.com/color-320x240-touchscreen-2-8-inch-ili9341-controller.html

### pre amp

https://www.amazon.com/Rakstore-Impedance-Preamplifier-Pre-Amplifier-Instrument/dp/B09FL6DXF8

other options suggested by DeepSeek:

INA217 (high-quality, low-noise) or TL072 (cost-effective, good performance).
For a simpler circuit, an N-channel JFET like the 2SK596 or 2N5457 is an option

# Big Todos

- Get basic power functioning with a 9v battery on breadboard.
- Wire and test preamp and teensy with some input monitoring code.
- Design signal flow and test support tone functions.
- Design Ui for the screen and create adjustable settings menus.
- Once our beta is funtional we need to design a reset pattern and a setup wizard.
- Test the design on musicians
- Design 3d printable case
- PARTY

# Hardware considerations

We should design this board around standard instrument effect pedal concepts. 

- It should run off 9v battery or 9v power supply
- all of its outputs and inputs should be 1/4 inch sized jacks
- Inputs on the left, ouputs on the right

We need to take 9v and use it to power the preamp and the teensy board.
We should probably have an on off switch.

# software considerations

## libraries

- Teensy Audio Library
- eez studio

## includes

- include <Audio.h>      // The main audio library
- include <Wire.h>       // For I2C control of the SGTL5000 chip
- include <SPI.h>        // For the optional SD card
- include <SD.h>         // For the optional SD card
- include <SerialFlash.h> // For the optional flash memory

# Functions

- AudioMemory(N);: This function allocates memory for audio processing.
    The number N (e.g., 10, 20, 50) is the number of audio blocks to reserve.
    Start with a value like 20 and monitor it later to adjust.
- sgtl5000_1.enable();: This turns on the audio chip on your shield.
- sgtl5000_1.volume(0.5);: This controls the output volume to the headphone jack (0.0 to 1.0).
- sgtl5000_1.inputSelect(AUDIO_INPUT_LINEIN);: This tells the shield to use
    the line-in jack for input, which is what you'll use for the cello preamp.
    Other options include AUDIO_INPUT_MIC

## The Visual Tool: Audio System Design Tool

https://www.pjrc.com/teensy/gui/

This is your secret weapon. Instead of writing complex signal routing code by hand,
    you can use the Audio System Design Tool available on the PJRC website.

    How it Works: It's a graphical interface where you drag and drop audio objects
    (like AudioInputI2S for input, AudioMixer4 for mixing signals, AudioFilterBiquad
    for filtering, and AudioOutputI2S for output) and connect them visually with "patch cords".

    The Output: Once your design is complete, the tool generates a fully functional
    block of C++ code with all the object declarations and AudioConnection patch cords
    ready to be pasted into your Arduino sketch. This dramatically simplifies prototyping.

## Key Code Concepts to Know

When you start coding, these are the core building blocks you'll manipulate:

    Audio Objects: These are the classes for every function. For your pitch-shifting device, key objects include:

        AudioInputI2S and AudioOutputI2S: For the audio in and out.

        AudioMixer4: For blending raw and processed signals.

        AudioFilterBiquad: For creating your high-pass filter.

        AudioEffectPitchShift: This is the object you'll need to shift the signal down an octave.

        AudioAnalyzeFFT1024: Could be useful for detecting the frequency to trigger your crossover logic.

    Audio Connections: You connect objects using the AudioConnection class. For example:
        AudioConnection patchCord1(inputObject, 0, pitchShiftObject, 0);

    This connects the left channel (0) of the input to the left channel of the pitch shifter.

    Audio Blocks and Latency: The library processes audio in blocks of 128 samples, which
    creates a base latency of about 2.9 milliseconds per block. This is very low and perfectly
    suitable for a live instrument effect. The library and Teensy 4.1's powerful processor are
    designed to handle complex chains with minimal added latency.

    Control and Status: The AudioControlSGTL5000 object controls the shield's hardware. You can
    also use AudioMemoryUsageMax() to check how much memory your audio processing uses and adjust the value in AudioMemory() accordingly.

