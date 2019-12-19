# aep2neopixel
A production pipeline to convert After Effects animations to Arduino-controlled Neopixels

### When to use 

* You want to prototype animations for a [Neopixel](https://www.adafruit.com/product/1461?length=1)-style LED strip
* You feel comfortable using After Effects for animation prototyping
* You are looking for a simple way to transfer the animations to a Arduino-controlled LED strip

### How to use

Here is a high-level description of the process:

1. __Create__ animation in _After Effects_
2. __Export__ the animation as a PNG sequence
3. __Convert__ the PNG sequence to `.ino` file, using [Processing](https://processing.org/) sketch, see `src/` folder
4. __Include__ `.ino` file from previous step in provided [Arduino](https://www.arduino.cc/en/Main/Software) sketch, see `src/` folder
4. __Build and upload__ the resulting code to your Arduino board
5. __Enjoy__ animation on your Neopixel strip

### Required tools

* A copy of the Arduino Integrated Development Environment (IDE) (free [download](https://www.arduino.cc/en/Main/Software))
* A copy of Processing (free [download](https://processing.org/))
* A copy of After Effects ([paid](https://en.wikipedia.org/wiki/Adobe_After_Effects) software)

### Authors

Jan Hillmann-Regett and Jakob Lehr
