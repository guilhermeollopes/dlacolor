#include <DLAColor.h>

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
void pinRGB::setCode(int codeColor){
        analogWrite(_pinR, 0);
        analogWrite(_pinG, 0);
        analogWrite(_pinB, 0);
    
    if(codeColor == 1){
        analogWrite(_pinB, 1023);
    }
	if(codeColor == 2){
        analogWrite(_pinG, 1023);
    }
	if(codeColor == 3) {
		analogWrite(_pinG, 900);
		analogWrite(_pinB, 1023);
	}
    if(codeColor == 4){
        analogWrite(_pinR, 1023);
    }
	if(codeColor == 5) {
		analogWrite(_pinR, 613);
		analogWrite(_pinG, 204);
		analogWrite(_pinB, 613);
	}
    if(codeColor == 6) {
        analogWrite(_pinR, 1023);
        analogWrite(_pinG, 1023);
    }
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
void pinRGB::setName(char name[12]){
    int rname = 0;
    int gname = 0;
    int bname = 0;

    if (name[0] == 'b' && name[3] == 'e'){ //blue
        bname = 255;

    }else if (name[0] == 'r' && name[2] == 'd'){ //red
        rname = 255;

    }else if (name[0] == 'g' && name[2] == 'e' && name[4] == 'n'){ //green
        gname = 255;
        
    }else if (name[0] == 's' && name[1] == 'n' && name[3] == 'w'){ //snow
        rname = 255;
        gname = 250;
        bname = 250;
    }else if (name [0] == 'g' && name[3] == 's' && name[6] == 'r'){ //ghostwhite
        rname = 258;
        gname = 248;
        bname = 255;
    }else if (name[0] == 'w' && name[2] == 'i' && name[6] == 'm'){ //whitesmoke
        rname = 245;
        gname = 245;
        bname = 245;
    }else if (name[0] == 'g' && name[2] == 'i' && name[7] == 'r'){ //gainsboro
        rname = 220;
        gname = 220;
        bname = 220;
    }else if (name[0] == 'f' && name[2] == 'o' && name[7] == 'h'){ //floralwhite
        rname = 255;
        gname = 250;
        bname = 240;
    }else if (name[0] == 'o' && name[2] == 'd' && name[6] == 'e'){ //oldlace
        rname = 253;
        gname = 245;
        bname = 230;
    }else if (name[0] == 'l' && name[2] == 'n' && name[4] == 'n'){ //linen
        rname = 250;
        gname = 240;
        bname = 230;
    }else if (name[0] == 'a' && name[2] == 't' && name[7] == 'w'){ //antiquewhite
        rname = 250;
        gname = 235;
        bname = 215;
    }else if (name[0] == 'p' && name[2] == 'p' && name[7] == 'w'){ //papayawhip
        rname = 255;
        gname = 239;
        bname = 213;
    }else if (name[0] == 'b' && name[2] == 'a' && name[7] == 'd'){ //blanchedalmond
        rname = 255;
        gname = 235;
        bname = 205;
    }else if (name[0] == 'b' && name[2] == 's' && name[5] == 'e'){ //bisque
        rname = 255;
        gname = 228;
        bname = 196;
    }else if (name[0] == 'p' && name[2] == 'a' && name[7] == 'f'){ //peachpuff
        rname = 255;
        gname = 228;
        bname = 185;
    }else if (name[0] == 'n' && name[2] == 'v' && name[7] == 'h'){ //navajowhite
        rname = 255;
        gname = 222;
        bname = 173;
    }else if (name[0] == 'm' && name[2] == 'c' && name[7] == 'n'){ //moccasin
        rname = 255;
        gname = 228;
        bname = 181;
    }else if (name[0] == 'c' && name[2] == 'r' && name[7] == 'k'){ //cornsilk
        rname = 255;
        gname = 248;
        bname = 220;
    }else if (name[0] == 'i' && name[2] == 'o' && name[4] == 'y'){ //ivory
        rname = 255;
        gname = 225;
        bname = 240;
    }else if (name[0] == 'l' && name[2] == 'm' && name[7] == 'i'){ //lemonchiffon
        rname = 255;
        gname = 250;
        bname = 205;
    }else if (name[0] == 's' && name[2] == 'a' && name[7] == 'l'){ //seashell
        rname = 255;
        gname = 245;
        bname = 238;
    }else if (name[0] == 'h' && name[2] == 'n' && name[7] == 'w'){ //honeydew
        rname = 240;
        gname = 255;
        bname = 240;
    }else if (name[0] == 'm' && name[2] == 'n' && name[7] == 'a'){ //mintcream
        rname = 245;
        gname = 255;
        bname = 250;
    }else if (name[0] == 'a' && name[2] == 'u' && name[4] == 'e'){ //azure
        rname = 240;
        gname = 255;
        bname = 255;
    }else if (name[0] == 'a' && name[2] == 'i' && name[7] == 'u'){ //aliceblue
        rname = 240;
        gname = 248;
        bname = 255;
    }else if (name[0] == 'l' && name[2] == 'v' && name[7] == 'r' && name[8] == ""){ //lavender
        rname = 230;
        gname = 230;
        bname = 250;
    }else if (name[0] == 'l' && name[2] == 'v' && name[7] == 'r' && name[8] == "b"){ //lavenderblush
        rname = 255;
        gname = 240;
        bname = 245;
    }else if (name[0] == 'm' && name[2] == 's' && name[7] == 's'){ //mistyrose
        rname = 255;
        gname = 228;
        bname = 225;
    }else if (name[0] == 'w' && name[2] == 'i' && name[4] == 'e'){ //white
        rname = 255;
        gname = 255;
        bname = 255;
    }

    

    int rcalculate = rname * 4;
    int gcalculate = gname * 4;
    int bcalculate = bname * 4;
    analogWrite(_pinR, rcalculate);
    analogWrite(_pinG, gcalculate);
    analogWrite(_pinB, bcalculate);
    
}
