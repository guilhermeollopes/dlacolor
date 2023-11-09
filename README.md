![cplcolor_logotype](https://user-images.githubusercontent.com/72569409/102688100-29cae600-41d3-11eb-9aa1-93bd714abf41.png)
# DLA Color
 
![GitHub repo size](https://img.shields.io/github/repo-size/guilhermeoliveiralopes/dlacolor?color=ff6464&label=size)
![GitHub](https://img.shields.io/github/license/guilhermeoliveiralopes/dlacolor?color=6ebdff)

⚠️ ATTENTION: The ViCo color system has not yet been implemented in this version for Arduino.
 
## What is DLAColor?

The DLA Color library facilitates the use of LEDs and RGB lamps, in a simple way, and with simple syntax. It is an Open Source library, created by a small community of Arduino and ESP32 programmers. The library has several ways to define the color, currently there is how to define it through RGB values, or with code, or name based on the ViCo color palette. The library is under development, so it can have more ways to define the color, but all versions published in tags are stable versions.
 
## How to install?

Installation is very simple, you just access it [here](https://github.com/guilhermeollopes/dlacolor/releases/), you will be redirected to the releases page, there you just choose the library version (always choose the most current).
After downloading, just open ArduinoIDE and go to Sketch > Include Library > Add .ZIP Library..., and select the downloaded file. This way the library will already be installed, now just use `#include <dlacolor.h>` to add the library to your project.

## What methods can I use?
There are a few methods you can use, and it's been developing more and more, so you can do whatever you want with this library in a simple way. For this see the methods below to use the library.
 
* **pinrgb:** This is the first method you should use if you want to use LED or RGB lamps, which contain 3 terminals. It serves to create an object, which contains which pins the RGB terminals are connected to. It is also with it that you will declare the name of this object, so that you can use it in a simple way. It also already defines the pins as OUTPUT. Example:
 
       pinrgb led1 (3, 5, 6);
 
* **setrgb:** With this method you can define the LED color, through the RGB code that goes from 0 to 255. Example:

       led1.setrgb(255, 255, 255);
* **setname:** Like setname you can set the LED color just by typing the color name as per the ViCo color list. Example:

       led1.setname('blue');
* **setcode:** With setcode, you can set the LED color quickly without needing RGB or other code. Just consult the color table (found below), and enter the color ID. It is recommended not to memorize the color coding, as all codes will only be permanently defined in version 1.0.0 of the library. Example:
 
       led1.setcode(2);
* **shine** The shine serves to define the LED brightness, the value used in the brightness can vary from 0 (in zero the LED is off) to 100 (in 100 the LED is at its maximum brightness). If the defined brightness value exceeds the value of 100 and is less than 0, there may be changes in the defined color, or even an error. Example:
 
       led1.shine(100);
* **setstatus:** The setstatus is only useful if you want to connect a led to a port other than PWM, or if you don't want to have a more detailed control like setrgb. Example:
 
       led1.setstatus(true, false, true);
* **setclean:** setclean, makes the LED go out completely. Example:
 
       led1.setclean();
* **teste:** To do a quick teste to see if the LEDs are working, use the teste, it turns on the 3 LEDs one at a time. Example:
 
       led1.teste();
## ViCo Colors List (Vivid Colors)
The DLAColor library uses in the setname definition method, the ViCo color list (Vivid Color), which is a palette of colors that have vivid colors, which work perfectly in an LED or RGB lamp. Using this palette helps to avoid having colors that won't work, or will give an unexpected result.

## Color Table
 
ID | Nome | R | G | B | ViCo
:---: | :---: | :---: | :---: | :---: | :---:
#0 | Black | 0 | 0 | 0 | off
#1 | White | 255 | 255 | 255 | on
#2 | Blue | 0 | 0 | 255 | blue
#3 | Green | 0 | 128 | 0 | green
#4 | Aqua | 0 | 255 | 255 | aqua
#5 | Red | 255 | 0 | 0 | red
#6 | Lilac | 255 | 0 | 255 | purple
#7 | Yellow | 255 | 255 | 0 | yellow
#8 | Orange | 183 | 65 | 14 | orange
#9 | Lime | 0 | 255 | 0 | lime
#10 | Wine Red | 94 | 18 | 36 | winered
#11 | Pink | 252 | 15 | 192 |pink
