#include <DLAColor.h>

int _pinR, _pinG, _pinB, _shine;

pinrgb::pinrgb(int pinR, int pinG, int pinB) {
    _pinR = pinR;
    _pinG = pinG;
    _pinB = pinB;
    pinMode(_pinR, OUTPUT);
    pinMode(_pinG, OUTPUT);
    pinMode(_pinB, OUTPUT);
}
void pinrgb::shine(int shine) {
    _shine = 100 - shine;
}
void pinrgb::setrgb(int R, int G, int B){
    int rc = R*4 - _shine*10;
    int gc = G*4 - _shine*10;
    int bc = B*4 - _shine*10;
    analogWrite(_pinR, rc);
    analogWrite(_pinG, gc);
    analogWrite(_pinB, bc);
}
void pinrgb::setcode(int codeColor){
    int r, g, b;
    analogWrite(_pinR, 0);
    analogWrite(_pinG, 0);
    analogWrite(_pinB, 0);
    if(codeColor == 0){ //black
    }
    if(codeColor == 1){ //write
        r = 255;
        g = 255;
        b = 255;
    }
    if(codeColor == 2){ //blue
        b = 255;
    }
	if(codeColor == 3){ //green
        g = 128;
    }
	if(codeColor == 4) { // 
		analogWrite(_pinG, 900);
		b = 255;
	}
    if(codeColor == 5){ //red
        r = 255;
    }
	if(codeColor == 6) {
		analogWrite(_pinR, 613);
		analogWrite(_pinG, 204);
		analogWrite(_pinB, 613);
	}
    if(codeColor == 7) {
        r = 255;
        g = 255;
    }
    if(codeColor == 8) {
        r = 183;
        g = 65;
        b = 14;
    }
    if(codeColor == 9) {
        g = 255;
    }
    if(codeColor == 10) { //winered
        r = 94;
        g = 18;
        b = 36;
    }
    if(codeColor == 11) { //pink
        r = 252;
        g = 15;
        b = 192;
    }
    int rc = r*4 - _shine*10;
    int gc = g*4 - _shine*10;
    int bc = b*4 - _shine*10;
    analogWrite(_pinR, rc);
    analogWrite(_pinG, gc);
    analogWrite(_pinB, bc);

}
void pinrgb::setclean(){
    analogWrite(_pinR, 0);
    analogWrite(_pinG, 0);
    analogWrite(_pinB, 0);
}
void pinrgb::teste(){
	digitalWrite(_pinR, HIGH);
	delay(1000);
	digitalWrite(_pinR, LOW);
	digitalWrite(_pinG, HIGH);
	delay(1000);
	digitalWrite(_pinG, LOW);
	digitalWrite(_pinB, HIGH);
	delay(1000);
	digitalWrite(_pinB, LOW);
}
void pinrgb::setstatus(bool r, bool g, bool b){
    if(r == true) {
        digitalWrite(_pinR, HIGH);
    } else if(r == false) {
        digitalWrite(_pinR, LOW);
    }

    if(g == true) {
        digitalWrite(_pinG, HIGH);
    } else if(g == false) {
        digitalWrite(_pinG, LOW);
    }

    if(b == true) {
        digitalWrite(_pinB, HIGH);
    } else if(b == false) {
        digitalWrite(_pinB, LOW);
    }
}