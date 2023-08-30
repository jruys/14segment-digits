// Demo the quad alphanumeric display LED backpack kit
// scrolls through every character, then scrolls Serial
// input onto the display

#include <Wire.h>
#include <Adafruit_GFX.h>
#include "Adafruit_LEDBackpack.h"

// 0 DP N M L K J H G2 G1 F E D C B A
//
// FAAAAAB
// FH.J.KB
// F.HJK.B
// .G1.G2.
// E.LMN.C
// EL.M.NC
// EDDDDDC DP


Adafruit_AlphaNum4 alpha70 = Adafruit_AlphaNum4();
Adafruit_AlphaNum4 alpha71 = Adafruit_AlphaNum4();

void showIt(byte digit, int data, int wait) {
  alpha70.writeDigitRaw(digit, data);
  alpha70.writeDisplay();
  delay(wait);
}

void setup() {
  Serial.begin(9600);
  
  alpha70.begin(0x70);  // pass in the address
  alpha71.begin(0x71);  // pass in the address
  //alpha70.setBrightness(1);
  //alpha70.blinkRate(3);

  alpha70.writeDigitRaw(0, 0b1111111111111111); // 0 DP N M L K J H G2 G1 F E D C B A
  alpha70.writeDigitRaw(1, 0b1111111111111111); 
  alpha70.writeDigitRaw(2, 0b1111111111111111); 
  alpha70.writeDigitRaw(3, 0b1111111111111111); 
  alpha70.writeDisplay();

  alpha71.clear();
  alpha71.writeDisplay();
  delay(1000);

  alpha70.clear();
  alpha70.writeDisplay();
  delay(200);

  showIt(0, 0b0000000001000000, 200); 
  showIt(0, 0b0100000011000000, 200); 
  showIt(1, 0b0000000001000000, 200); 
  showIt(1, 0b0100000011000000, 200); 
  showIt(2, 0b0000000001000000, 200); 
  showIt(2, 0b0100000011000000, 200); 
  showIt(3, 0b0000000001000000, 200); 
  showIt(3, 0b0100000011000000, 1000); 

  alpha70.clear();
  alpha70.writeDisplay();
  delay(200);

  showIt(0, 0b0000000000100000, 200); 
  showIt(0, 0b0000000000110000, 200); 
  showIt(0, 0b0000000000111000, 200);
  showIt(0, 0b0000000000111100, 200);
  showIt(0, 0b0000000000111110, 200);
  showIt(0, 0b0000000000111111, 200);

  showIt(1, 0b0000000000000010, 200);
  showIt(1, 0b0000000000000110, 200);

  showIt(2, 0b0000000000000001, 200);
  showIt(2, 0b0000000000000011, 200);
  showIt(2, 0b0000000010000011, 200);
  showIt(2, 0b0000000011000011, 200);
  showIt(2, 0b0000000011010011, 200);
  showIt(2, 0b0000000011011011, 200);

  showIt(3, 0b0000000000000001, 200);
  showIt(3, 0b0000000000000011, 200);
  showIt(3, 0b0000000010000011, 200);
  showIt(3, 0b0000000010000111, 200);
  showIt(3, 0b0000000010001111, 1000);

  alpha70.clear();
  alpha70.writeDisplay();
  delay(200);

  showIt(0, 0b0000000000100000, 200); 
  showIt(0, 0b0000000001100000, 200); 
  showIt(0, 0b0000000011100000, 200); 
  showIt(0, 0b0000000011100010, 200); 
  showIt(0, 0b0000000011100110, 200); 

  showIt(1, 0b0000000000100000, 200);
  showIt(1, 0b0000000001100000, 200);
  showIt(1, 0b0000000011100000, 200);
  showIt(1, 0b0000000011100100, 200);
  showIt(1, 0b0000000011101100, 200);
  showIt(1, 0b0000000011101101, 200);

  showIt(2, 0b0000000000000001, 200);
  showIt(2, 0b0000000000100001, 200);
  showIt(2, 0b0000000000110001, 200);
  showIt(2, 0b0000000000111001, 200);
  showIt(2, 0b0000000000111101, 200);
  showIt(2, 0b0000000010111101, 200);
  showIt(2, 0b0000000011111101, 200);

  showIt(3, 0b0000000000000001, 200);
  showIt(3, 0b0000000000000011, 200);
  showIt(3, 0b0000000000000111, 1000);
  
  alpha70.clear();
  alpha70.writeDisplay();
  delay(200);

  showIt(1, 0b0000000000010000, 200);
  showIt(1, 0b0000000000011000, 200);
  showIt(1, 0b0000000000011100, 200);
  showIt(1, 0b0000000010011100, 200);
  showIt(1, 0b0000000011011100, 200);
  showIt(1, 0b0000000011111100, 200);
  showIt(1, 0b0000000011111101, 200);
  showIt(1, 0b0000000011111111, 200);

  showIt(2, 0b0000000000000001, 200);
  showIt(2, 0b0000000000100001, 200);
  showIt(2, 0b0000000001100001, 200);
  showIt(2, 0b0000000011100001, 200);
  showIt(2, 0b0000000011100011, 200);
  showIt(2, 0b0000000011100111, 200);
  showIt(2, 0b0000000011101111, 1000);

  alpha70.clear();
  alpha70.writeDisplay();
  delay(200);

  showIt(0, 0b0000000001000000, 200); 
  showIt(0, 0b0100000011000000, 200); 
  showIt(1, 0b0000000001000000, 200); 
  showIt(1, 0b0100000011000000, 200); 
  showIt(2, 0b0000000001000000, 200); 
  showIt(2, 0b0100000011000000, 200); 
  showIt(3, 0b0000000001000000, 200); 
  showIt(3, 0b0100000011000000, 1000); 
  alpha70.clear();
  alpha70.writeDisplay();

  Serial.println("Start typing to display!");
}


char displaybuffer[8] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
String showMe = "FAR OUT IN THE UNCHARTED BACKWATERS OF THE UNFASHIONABLE END OF THE WESTERN SPIRAL ARM OF THE GALAXY LIES A SMALL UNREGARDED YELLOW SUN...     ";

void loop() {
  for (int i=0; i<showMe.length(); i++) {
  
    char c = showMe.charAt(i);
    if (! isprint(c)) return; // only printable!
  
    // scroll down display
    displaybuffer[0] = displaybuffer[1];
    displaybuffer[1] = displaybuffer[2];
    displaybuffer[2] = displaybuffer[3];
    displaybuffer[3] = displaybuffer[4];
    displaybuffer[4] = displaybuffer[5];
    displaybuffer[5] = displaybuffer[6];
    displaybuffer[6] = displaybuffer[7];
    displaybuffer[7] = c;
 
    // set every digit to the buffer
    alpha70.writeDigitAscii(0, displaybuffer[0]);
    alpha70.writeDigitAscii(1, displaybuffer[1]);
    alpha70.writeDigitAscii(2, displaybuffer[2]);
    alpha70.writeDigitAscii(3, displaybuffer[3]);
    alpha71.writeDigitAscii(0, displaybuffer[4]);
    alpha71.writeDigitAscii(1, displaybuffer[5]);
    alpha71.writeDigitAscii(2, displaybuffer[6]);
    alpha71.writeDigitAscii(3, displaybuffer[7]);
 
    // write it out!
    alpha70.writeDisplay();
    alpha71.writeDisplay();
    delay(200);
  } 
}