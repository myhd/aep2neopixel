# aep2neopixel
A production pipeline to convert After Effects animations to Arduino-controlled Neopixels

### When to use 

* you want to prototype animations for a [Neopixel](https://www.adafruit.com/product/1461?length=1)-style LED strips
* you feel comfortable using After Effects for animation prototyping
* you are looking for a simple way to transfer these animations to a Arduino-controlled LED strip

### How to use

Here is a high-level description of the process.

1. __Create__ an animation in _After Effects_ (AEP)
2. __Export__ the animation as a PNG sequence
3. __Convert__ the PNG sequence to a _Arduino_ code file, using provided _[Processing](https://processing.org/) sketch_ 
4. __Build and upload__ to your microprocessor board, using provided _[Arduino](https://www.arduino.cc/en/Main/Software) sketch_, which includes code file from above step.
5. __Enjoy__ animation on your Neopixel Strip

### Authors

Jan Hillmann-Regett and Jakob Lehr
