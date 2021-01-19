# DLA Color
![cplcolor_logotype](https://user-images.githubusercontent.com/72569409/102688100-29cae600-41d3-11eb-9aa1-93bd714abf41.png)

![GitHub repo size](https://img.shields.io/github/repo-size/guilhermeoliveiralopes/dlacolor?color=ff6464&label=size)
![jsDelivr hits (GitHub)](https://img.shields.io/jsdelivr/gh/hm/guilhermeoliveiralopes/dlacolor?color=6bff87&label=downloads)
![GitHub](https://img.shields.io/github/license/guilhermeoliveiralopes/dlacolor?color=6ebdff)

[Baixar agora!](https://github.com/guilhermeoliveiralopes/dlacolor/releases)

## Para que serve?
 A biblioteca DLA Color, foi feita com o intuito de facilitar o uso de LED e lampadas RGB. O DLA Color faz você ter muitas opções de ultilização do LED, sem precisar ultizar diversos comandos.
## Quais os métodos que posso utilizar?
 Existem alguns metodos que você pode usar, e ela vem se desenvolvendo mais e mais, para você conseguir fazer o que quiser com esta biblioteca de forma simples. Para isto veja os metodos abaixo para ultilizar a biblioteca.

 * **pinRGB:** Este é o primeiro metodo que você deve ultilizar caso queira ultilizar LED ou lampadas RGB, que contenha 3 terminais. Ele serve para criar um objeto, que contenha em quais pinos os terminais RGB estão conectados. É com ele também que você irá declarar o nome deste objeto, para que você consiga ultilizalo de forma simples. Ele também já define os pinos como OUTPUT.
 *Exemplo: pinRGB led1 (3, 5, 6);*

 * **setRGB:** Com este metodo você pode definir a cor do LED, por meio do codigo RGB que vai de 0 a 255.
 *Exemplo: led1.setRGB(255, 255, 255);*

 * **setCode:** Com o setColor, você pode definir a cor do LED rapidamente sem precisar de codigo RGB ou de outro tipo. Basta consutar a tabela de cores (que se encontra mais abaixo), e colocar o ID da cor.
 *Exemplo: led1.setColor(2);*
 
 * **setStatus:** O setStatus, serve apenas caso você queira ligar um led em uma porta que não seja PWM, ou caso você não queira ter um controle mais detalhado como no setRGB.
 *Exemplo: led1.setStatus(true, false, true);*

 * **setClean:** O setClean, faz com que o LED se apague totalmente.
 *Exemplo: led1.setClean();*

 * **test:** Para fazer um teste rápido para ver se os LEDS estão funcionado utilize o test, ele liga os 3 LEDS um de cada vez.
 *Exemplo: led1.test();*

 ## Tabela de Cores

ID | Nome | R | G | B
:---: | :---: | :---: | :---: | :---:
#1 | Azul | 0 | 0 | 255
#2 | Verde | 0 | 255 | 0
#3 | Aqua | 0 | 255 | 255
#4 | Vermelho | 255 | 0 | 255
#5 | Lilas | 134 | 50 | 152
#6 | Amarelo | 255 | 255 | 0
