#include <DLAColor.h>

int _pinR, _pinG, _pinB, shine;

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
void pinRGB::setRGB(int R, int G, int B){
    int rc = R*4 - _shine*10;
    int gc = G*4 - _shine*10;
    int bc = B*4 - _shine*10;
    analogWrite(_pinR, rc);
    analogWrite(_pinG, gc);
    analogWrite(_pinB, bc);
}
void pinRGB::setCode(int codeColor){
    int r, g, b;
    analogWrite(_pinR, 0);
    analogWrite(_pinG, 0);
    analogWrite(_pinB, 0);
    if(codeColor == 0){
    }
    if(codeColor == 1){
        r = 255;
        g = 255;
        b = 255;
    }
    if(codeColor == 2){
        b = 255;
    }
	if(codeColor == 3){
        g = 255;
    }
	if(codeColor == 4) {
		analogWrite(_pinG, 900);
		b = 255;
	}
    if(codeColor == 5){
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
    int rc = r*4 - _shine*10;
    int gc = g*4 - _shine*10;
    int bc = b*4 - _shine*10;
    analogWrite(_pinR, rc);
    analogWrite(_pinG, gc);
    analogWrite(_pinB, bc);

}
void pinRGB::setClean(){
    analogWrite(_pinR, 0);
    analogWrite(_pinG, 0);
    analogWrite(_pinB, 0);
}
void pinRGB::test(){
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
void pinRGB::setStatus(bool r, bool g, bool b){
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