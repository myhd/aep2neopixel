// Instructions: Move this file to your Arduino sketch folder.
 
int numberOfFrames = 8;
int numberOfLEDs = 6;

const PROGMEM unsigned char B[8][18]  = {
  // frame 1 of 8
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 169, 255  },
  // frame 2 of 8
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 169, 255, 2, 57, 86  },
  // frame 3 of 8
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 169, 255, 2, 57, 86, 0, 4, 6  },
  // frame 4 of 8
  {0, 0, 0, 0, 0, 0, 5, 169, 255, 2, 57, 86, 0, 4, 6, 0, 0, 0  },
  // frame 5 of 8
  {0, 0, 0, 5, 169, 255, 2, 57, 86, 0, 4, 6, 0, 0, 0, 0, 0, 0  },
  // frame 6 of 8
  {5, 169, 255, 2, 57, 86, 0, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0  },
  // frame 7 of 8
  {2, 57, 86, 0, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0  },
  // frame 8 of 8
  {0, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0  },
};


// created on 15/1/2020 - 11:15:46
