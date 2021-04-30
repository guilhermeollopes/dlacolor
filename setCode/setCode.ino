/*  Biblioteca: dlacolor.h
 *  Criador: Glumily
 *  Data: 20 - 11 - 2020
 *  Exemplo: setCode
 */

#include <dlacolor.h> // Adição da biblioteca ao codigo

pinRGB led1 (3, 5, 6); // Defininção os pinos em que o LED estão sendo usados na ordem RGB

void setup() {

}

void loop() {
  led1.setCode(1); // Escolha de cor por meio da cor do LED estabelecida com base na ViCo Database
