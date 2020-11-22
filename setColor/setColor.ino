/*  Biblioteca: rxcolor.h
 *  Criador: Retlex
 *  Data: 20 - 11 - 2020
 *  Exemplo: setColor
 */

#include <rxcolor.h> //Incluindo a biblioteca

pinRGB nomeLED (3, 5, 6); // Definindo nome do LED e quais são os pinos, seguido na ordem (R, G e B)

void setup() {

}

void loop() {
  nomeLED.setColor(1); // Definindo cor pelo ID da cor já predefinido, no fim do código se encontra a lista de todas cores
}

/*
 *  1 - Azul
 *  2 - 
 * 
 * 
 */
