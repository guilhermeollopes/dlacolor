#ifndef _RX_COLOR
#define _RX_COLOR

#include <Arduino.h>

class pinRGB{
    private:

    public:
        pinRGB(int pinR, int pinG, int pinB);
        void setRGB(int R, int G, int B);
        void setColor(int codeColor);
        void setClean();
		void test();
};

#endif