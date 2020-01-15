// Ignore everything in this file please - // no touch
// Reading array of bytes from PROGMEM - see https://forum.arduino.cc/index.php?topic=560344.0

void displayFrame (int theFrame) {

  memcpy_P(buffer, B[theFrame], numberOfLEDs*3);

  // update all 24 LEDs with the BUFFERed values
  for (int j = 0; j < numberOfLEDs; j = j + 1) {
    int offs = 3 * j; // offset
    strip.setPixelColor(j,  buffer[offs + 0], buffer[offs + 1], buffer[offs + 2]);
  } // end of update LEDs

  // actually display the updated LEDs
  strip.show();

}
