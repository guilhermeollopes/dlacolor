#include <RetlexColor.h>

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
void pinRGB::setRGB(int R, int G, int B){
    int r = (R*1023/255);
    int g = (G*1023/255);
    int b = (B*1023/255);

    analogWrite(_pinR, r);
    analogWrite(_pinG, g);
    analogWrite(_pinB, b);
}
void pinRGB::setColor(int codeColor){
    if(codeColor == 1){
        analogWrite(_pinR, 0);
        analogWrite(_pinG, 0);
        analogWrite(_pinB, 1023);
    }
    if(codeColor == 4){
        analogWrite(_pinR, 1023);
        analogWrite(_pinG, 0);
        analogWrite(_pinB, 0);
    }
    if(codeColor == 2){
        analogWrite(_pinR, 0);
        analogWrite(_pinG, 1023);
        analogWrite(_pinB, 0);
    }
	if(codeColor == 3) {
		analogWrite(_pinR, 0);
		analogWrite(_pinG, 1023);
		analogWrite(_pinB, 1023);
	}
	if(codeColor == 5) {
		analogWrite(_pinR, 613);
		analogWrite(_pinG, 204);
		analogWrite(_pinB, 613);
	}
    if(codeColor = 6) {
        analogWrite(_pinR, 1023);
        analogWrite(_pinG, 1023);
        analogWrite(_pinB, 0);
    }
void pinRGB::setClean(){
    analogWrite(_pinR, 0);
    analogWrite(_pinG, 0);
    analogWrite(_pinB, 0);
}