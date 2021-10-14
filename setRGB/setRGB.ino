/*  Library: dlacolor.h
 *  Creator: Guilherme Lopes
 *  Date: 20 - 11 - 2020
 *  Update: 14 - 10 - 2021
 *  Example: setRGB
 */

#include <rxcolor.h> // Imports from library to code

pinRGB nomeLED (3, 5, 6); // Define the LED's RGB terminals by order (R, G, B)

void setup() {

}

void loop() {
  nomeLED.setRGB(255, 255, 255); //Defines the color by RGB, following in order (R, G and B)
}
