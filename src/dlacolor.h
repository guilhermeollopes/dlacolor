#ifndef _DLA_COLOR
#define _DLA_COLOR

#include <Arduino.h>

class pinrgb{
    private:

    public:
        pinrgb(int pinR, int pinG, int pinB);
        void setrgb(int R, int G, int B);
        void setcode(int codeColor);
        void setclean();
		void setstatus(bool r, bool g, bool b);
        void setname(char name[12]);
        void teste();
        void shine(int shine);
        
};

#endif