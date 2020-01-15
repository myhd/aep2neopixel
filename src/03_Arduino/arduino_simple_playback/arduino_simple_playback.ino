#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// ----------------------------------------
// Note: ONLY EDIT SETTINGS BELOW THIS LINE
// ----------------------------------------

int framesPerSecond = 20;   // playback speed on the neopixels
int LEDbrightness   = 50;   // typical value 50, maximum value 255

#define LED_PIN    4 // neopixel data pin
#define LED_COUNT 17 // how many LEDs are you talking to

// ----------------------------------------
// END OF EDITABLE SETTINGS.
// ----------------------------------------

extern int numberOfFrames;
extern int numberOfLEDs;

int framesPerSeconddelay = 1000 / framesPerSecond; // we need to calculate this

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
byte buffer[72]; // used for playback // TODO fix this to be working for any number of frames

void displayFrame (int theFrame) ;

void setup() {

  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn off all pixels
  strip.setBrightness(LEDbrightness);
}

void loop() {

  // loop for NUMBER OF FRAMES
  for (int i = 0; i < numberOfFrames; i = i + 1) {
    displayFrame (i); // use function for playback
    delay (framesPerSeconddelay); // see sketch top
  }


}
