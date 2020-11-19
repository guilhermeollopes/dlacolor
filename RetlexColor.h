#ifndef _RETLEX_COLOR
#define _RETLEX_COLOR

#include <Arduino.h>

class pinRGB{
    private:

    public:
        pinRGB(int pinR, int pinG, int pinB);
        void setRGB(int R, int G, int B);
        void setColor(int codeColor);
        void setClean();

};

#endif