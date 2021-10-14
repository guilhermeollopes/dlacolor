/*  Library: dlacolor.h
 *  Creator: Guilherme Lopes
 *  Date: 20 - 11 - 2020
 *  Update: 14 - 10 - 2021
 *  Example: setCode
 */

#include <dlacolor.h> // Imports from library to code

pinRGB led1 (3, 5, 6); // Define the LED's RGB terminals by order (R, G, B)

void setup() {

}

void loop() {
  led1.setCode(1); // Set the blue color through the ViCo color list
