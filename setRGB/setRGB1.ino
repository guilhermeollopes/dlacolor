/*  Biblioteca: dlacolor.h
 *  Criador: Glumily
 *  Data: 20 - 11 - 2020
 *  Exemplo: setRGB
 */

#include <dlacolor.h> //Incluindo a biblioteca

pinRGB nomeLED (3, 5, 6); // Definindo nome do LED e quais são os pinos, seguido na ordem (R, G e B)

void setup() {

}

void loop() {
  nomeLED.setRGB(255, 255, 255); //Escolhendo a cor por RGB, seguindo na ordem (R, G e B)
}
