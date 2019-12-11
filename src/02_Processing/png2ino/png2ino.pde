import java.io.FileWriter;


int numFrames     = 128;    // The number of frames in the animation
String folderName = "fire"; // subfolder of "data" subfolder where the animation PNGs are
int numleds       = 24;     // number of LEDs on the Neopixel string that you are using

// end of configurations --- do not touch below

PImage[] images = new PImage[numFrames]; 
PrintWriter output; // used to write text file
int currentFrame  = 0; // used to iterate through all frames that are loaded into "images" (see above)

int gammaCorrect (int val) { // function to gamma correct color values, see https://learn.adafruit.com/led-tricks-gamma-correction/the-longer-fix
  float gamma   = 2.8; // Correction factor
  int   max_in  = 255, max_out = 255; // Top end of INPUT range
  int correctedVal = (int)(pow((float)val / (float)max_in, gamma) * max_out + 0.5);
  return correctedVal;
}

void setup() {
  size(480, 20);
  output = createWriter("animation.ino"); 
  output.println ("// move this file to your Arduino sketch.");
  String createdTime = (day()+"/"+month()+"/"+year()+" - "+hour()+":"+minute()+":"+second());
  output.println ("// animation.ino: created on " + createdTime);
  output.println ( "const PROGMEM unsigned char B["+ numFrames + "][72]  = {");

  for (int i = 0; i < numFrames; i = i+1) { // pre-load all images
    String imageName = "data/"+folderName+"/img_" + nf(i, 5) + ".png";
    images[i]  = loadImage(imageName);
  }
} 

void draw() { 
  background(0); // draw black background
  //println(currentFrame); // which frame are we at? (FIXME remove)
  image(images[currentFrame], 0, 0, 480, 20); // draw mini version top left
  image(images[currentFrame], 0, 0); // draw image full size
  loadPixels(); // copy stage to very large array for later access

  output.println ("  // frame " + (currentFrame+1) + " of " + numFrames);
  output.print("  {" );

  for (int j = 0; j < numleds; j++) { // loop thru all leds with the current png
    color c = pixels[j]; // get pixel 0 ... numpixels on screen
    int r = int(red (c)); // extract red green blue values
    int g = int(green (c));
    int b = int(blue (c));

    output.print(gammaCorrect(r) + ", " + gammaCorrect(g) + ", " + gammaCorrect(b) );

    if (j < (numleds-1)) {
      output.print(", ");
    }

    // println();
  }
  output.print("  },\n" );

  currentFrame++; // next frame is up...
  if (currentFrame==numFrames) {
    output.println ( "};");
    output.flush(); // empty text buffer (we want this)
    output.close(); // Finishes the file
    exit(); // stop if sketch is done
  }
}