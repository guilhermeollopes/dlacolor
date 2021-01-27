#ifndef _DLA_COLOR
#define _DLA_COLOR

#include <Arduino.h>

class pinRGB{
    private:

    public:
        pinRGB(int pinR, int pinG, int pinB);
        void setRGB(int R, int G, int B);
        void setCode(int codeColor);
        void setClean();
		void setStatus(bool r, bool g, bool b);
        void setName(char name[12]);
        void test();
        
};

#endif