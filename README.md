# DLA Color
![cplcolor_logotype](https://user-images.githubusercontent.com/72569409/102688100-29cae600-41d3-11eb-9aa1-93bd714abf41.png)

![GitHub repo size](https://img.shields.io/github/repo-size/guilhermeoliveiralopes/dlacolor?color=ff6464&label=size)
![GitHub](https://img.shields.io/github/license/guilhermeoliveiralopes/dlacolor?color=6ebdff)

[Baixar](https://github.com/guilhermeoliveiralopes/dlacolor/releases)

[Versão para ESP](https://github.com/guilhermeoliveiralopes/dlespcolor/)

## Para que serve?
 A biblioteca DLA Color, foi feita com o intuito de facilitar o uso de LED e lampadas RGB. O DLA Color faz você ter muitas opções de ultilização do LED, sem precisar ultizar diversos comandos.
## Quais os métodos que posso utilizar?
 Existem alguns metodos que você pode usar, e ela vem se desenvolvendo mais e mais, para você conseguir fazer o que quiser com esta biblioteca de forma simples. Para isto veja os metodos abaixo para ultilizar a biblioteca.

 * **pinRGB:** Este é o primeiro metodo que você deve ultilizar caso queira ultilizar LED ou lampadas RGB, que contenha 3 terminais. Ele serve para criar um objeto, que contenha em quais pinos os terminais RGB estão conectados. É com ele também que você irá declarar o nome deste objeto, para que você consiga ultilizalo de forma simples. Ele também já define os pinos como OUTPUT. Exemplo:

        pinRGB led1 (3, 5, 6);

 * **setRGB:** Com este metodo você pode definir a cor do LED, por meio do codigo RGB que vai de 0 a 255. Exemplo:
 
        led1.setRGB(255, 255, 255);
 
 * **setName:** Como o setName você pode definir a cor do LED apenas digitando o nome da cor em inglês. Atualmente o setName ainda está em desenvolvimento, por conta disto que se tem apenas 4 cores que são: "red", "green", "blue" e "aqua". Exemplo:
 
        led1.setName("blue");

 * **setCode:** Com o setCode, você pode definir a cor do LED rapidamente sem precisar de codigo RGB ou de outro tipo. Basta consutar a tabela de cores (que se encontra mais abaixo), e colocar o ID da cor. Exemplo:

        led1.setCode(2);
* **shine** O shine serve para definir o brilho do LED, o valor usando no brilho pode variar de 0 (sendo que em zero o LED fica apagado) até 100 (no cem o LED está no seu brilho maxímo). Caso o valor do brilho definido exeda o valor de 100 e seja menor do que 0, pode está havendo alterações na cor definida, ou até mesmo um erro. Exemplo:

        led1.shine(100);
 * **setStatus:** O setStatus, serve apenas caso você queira ligar um led em uma porta que não seja PWM, ou caso você não queira ter um controle mais detalhado como no setRGB. Exemplo:

        led1.setStatus(true, false, true);

 * **setClean:** O setClean, faz com que o LED se apague totalmente. Exemplo:

        led1.setClean();

 * **test:** Para fazer um teste rápido para ver se os LEDS estão funcionado utilize o test, ele liga os 3 LEDS um de cada vez. Exemplo:

        led1.test();

 ## Ultilização da paleta ViCo
 A biblioteca DLAColor ultiliza no metodo de definicição setName, a paleta de cores ViCo (Vivid Color), que e uma paletade cores que possue cores vivas, que funcionam perfeitamente em um LED ou lampada rpg. A ultilização desta paleta ajuda evitar ter cores que não vão funcionar.
 A paleta ViCo ultilizada nesta biblioteca, é modificada para já definir a cor do LED, dentro do proprio arquivo, por conta disto o arquivo recebe o nome ViCoM (Vivid Color Modified)

 ## Tabela de Cores

ID | Nome | R | G | B | ViCo
:---: | :---: | :---: | :---: | :---: | :---:
#0 | Black | 0 | 0 | 0 | off
#1 | White | 255 | 255 | 255 | white
#2 | Azul | 0 | 0 | 255 | blue
#3 | Verde | 0 | 255 | 0 | green
#4 | Aqua | 0 | 255 | 255 | aqua
#5 | Vermelho | 255 | 0 | 0 | red
#6 | Lilas | 255 | 0 | 255 | purple
#7 | Amarelo | 255 | 255 | 0 | yellow
