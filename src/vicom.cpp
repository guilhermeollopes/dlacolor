#include <dlacolor.h>

int _pinR;
int _pinG;
int _pinB;
int _shine;

pinRGB::pinRGB(int pinR, int pinG, int pinB) {
    _pinR = pinR;
    _pinG = pinG;
    _pinB = pinB;
    pinMode(_pinR, OUTPUT);
    pinMode(_pinG, OUTPUT);
    pinMode(_pinB, OUTPUT);
}
void pinRGB::shine(int shine) {
    _shine = 100 - shine;
}
void pinRGB::setName(char name[12]){
    int rvalue = 0;
    int gvalue = 0;
    int bvalue = 0;

    if (name[0] == 'b' && name[3] == 'e'){ //blue
        bvalue = 255;

    }else if (name[0] == 'r' && name[2] == 'd'){ //red
        rvalue = 255;

    }else if (name[0] == 'g' && name[2] == 'e' && name[4] == 'n'){ //green
        gvalue = 128;
        
    }else if(name[0] == 'l' && name[1] == 'i' && name[3] == 'e'){ //lime
        gvalue = 255;
    }else if (name[0] == 'o' && name[1] == 'n'){ //on
        rvalue = 255;
        gvalue = 255;
        bvalue = 255;
    }else if (name[0] == 'y' && name[1] == 'e' && name[4] == 'o') { //yellow
        rvalue = 255;
        gvalue = 255;
    }else if (name[0] == 'p' && name[2] == 'r' && name[5] == 'e') { //purple
        rvalue = 255;
        bvalue = 255;
    }else if (name[0] == 'a' && name[1] == 'q' && name[3] == 'a') { //aqua
        gvalue = 255;
        bvalue = 255;
    }else if (name[0] == 'o' && name[1] == 'f' && name[2] == 'f') { //off
        rvalue = 0;
        gvalue = 0;
        bvalue = 0;
    }else if (name[0] == 'o' && name[2] == 'a' && name[5] == 'e') { //orange
        rvalue = 183;
        gvalue = 65;
        bvalue = 14;
    }else if(name[0] == 'w' && name[3] == 'e' && name[6] == 'd') { //winered
        rvalue = 94;
        gvalue = 18;
        bvalue = 36;
    }else if (name[0] == 'p' && name[2] == 'n' && name[3] == 'k'){ //pink
        rvalue = 252;
        gvalue = 15;
        bvalue = 192;
    }else {

    }
    
    int rcalculate = rvalue*4 - _shine*10;
    int gcalculate = gvalue*4 - _shine*10;
    int bcalculate = bvalue*4 - _shine*10;
    analogWrite(_pinR, rcalculate);
    analogWrite(_pinG, gcalculate);
    analogWrite(_pinB, bcalculate);
}
