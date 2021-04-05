#include <dlacolor.h>

int _pinR;
int _pinG;
int _pinB;

pinRGB::pinRGB(int pinR, int pinG, int pinB) {
    _pinR = pinR;
    _pinG = pinG;
    _pinB = pinB;
    pinMode(_pinR, OUTPUT);
    pinMode(_pinG, OUTPUT);
    pinMode(_pinB, OUTPUT);
}

pinRGB::setName(char name[12]){
    int rvalue = 0;
    int gvalue = 0;
    int bvalue = 0;

    if (name[0] == 'b' && name[3] == 'e'){ //blue
        bvalue = 255;

    }else if (name[0] == 'r' && name[2] == 'd'){ //red
        rvalue = 255;

    }else if (name[0] == 'g' && name[2] == 'e' && name[4] == 'n'){ //green
        gvalue = 255;
        
    }else if (name[0] == 'w' && name[2] == 'r' && name[4] == 'e'){ //write
        rvalue = 255;
        gvalue = 255;
        bvalue = 255;
    }else if (name[0] == 'y' && name[1] == 'e' && name[4] == 'o') { //yellow
        rvalue = 255;
        gvalue = 255;
    }else if (name[0] == 'p' && name[2] == 'r' && name[5] == 'e') { //purple
        rvalue = 255;
        bvalue = 255;
    }
    
    int rcalculate = rname * 4;
    int gcalculate = gname * 4;
    int bcalculate = bname * 4;
    analogWrite(_pinR, rcalculate);
    analogWrite(_pinG, gcalculate);
    analogWrite(_pinB, bcalculate);
    //auto rename tag
    //bookmrks
}