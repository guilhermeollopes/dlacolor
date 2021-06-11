![cplcolor_logotype](https://user-images.githubusercontent.com/72569409/102688100-29cae600-41d3-11eb-9aa1-93bd714abf41.png)
# DLA Color
 
![GitHub repo size](https://img.shields.io/github/repo-size/guilhermeoliveiralopes/dlacolor?color=ff6464&label=size)
![GitHub](https://img.shields.io/github/license/guilhermeoliveiralopes/dlacolor?color=6ebdff)
 
A biblioteca DLA Color, facilita a utilização de LEDs e lâmpadas RGB, de uma forma simples, e com sintaxe simples. Ela é uma biblioteca Open Source, criada por uma pequena comunidade de programadores de Arduino e ESP32. A biblioteca conta com diversos modos para definir a cor, atualmente há como definir através de valores RGB, ou com o código, ou nome com base na paleta de cores ViCo. A biblioteca está em desenvolvimento, para poder ter mais formas de definir a cor, mas todas as versões publicadas nas tags são versões estáveis.
 
## Quais os métodos que posso utilizar?
Existem alguns métodos que você pode usar, e ela vem se desenvolvendo mais e mais, para você conseguir fazer o que quiser com esta biblioteca de forma simples. Para isto veja os métodos abaixo para utilizar a biblioteca.
 
* **pinRGB:** Este é o primeiro método que você deve utilizar caso queira utilizar LED ou lâmpadas RGB, que contenha 3 terminais. Ele serve para criar um objeto, que contenha em quais pinos os terminais RGB estão conectados. É com ele também que você irá declarar o nome deste objeto, para que você consiga utilizá-lo de forma simples. Ele também já define os pinos como OUTPUT. Exemplo:
 
       pinRGB led1 (3, 5, 6);
 
* **setRGB:** Com este método você pode definir a cor do LED, por meio do código RGB que vai de 0 a 255. Exemplo:

       led1.setRGB(255, 255, 255);
* **setName:** Como o setName você pode definir a cor do LED apenas digitando o nome da cor em inglês. Atualmente o setName ainda está em desenvolvimento, por conta disto que se tem apenas 4 cores que são: "red", "green", "blue" e "aqua". Exemplo:

       led1.setName("blue");
* **setCode:** Com o setCode, você pode definir a cor do LED rapidamente sem precisar de código RGB ou de outro tipo. Basta consultar a tabela de cores (que se encontra mais abaixo), e colocar o ID da cor. É recomendável não decorar o código das cores, pois todos os códigos só serão definidos permanentemente na versão 1.0.0 da biblioteca. Exemplo:
 
       led1.setCode(2);
* **shine** O shine serve para definir o brilho do LED, o valor usando no brilho pode variar de 0 (sendo que em zero o LED fica apagado) até 100 (em cem o LED está no seu brilho máximo). Caso o valor do brilho definido exceda o valor de 100 e seja menor do que 0, pode estar havendo alterações na cor definida, ou até mesmo um erro. Exemplo:
 
       led1.shine(100);
* **setStatus:** O setStatus, serve apenas caso você queira ligar um led em uma porta que não seja PWM, ou caso você não queira ter um controle mais detalhado como no setRGB. Exemplo:
 
       led1.setStatus(true, false, true);
* **setClean:** O setClean, faz com que o LED se apague totalmente. Exemplo:
 
       led1.setClean();
* **test:** Para fazer um teste rápido para ver se os LEDS estão funcionando, utilize o test, ele liga os 3 LEDS um de cada vez. Exemplo:
 
       led1.test();
## Utilização da paleta ViCo
A biblioteca DLAColor utiliza no método de definição setName, a paleta de cores ViCo (Vivid Color), que é uma paleta de cores que possuem cores vivas, que funcionam perfeitamente em um LED ou lâmpada RGB. A utilização desta paleta ajuda evitar ter cores que não vão funcionar.
Utilizamos a paleta é modificada para-se adequar a biblioteca, desta forma já é possível definir a cor do LED, no próprio arquivo, por conta disto o arquivo recebe o nome ViCoM (Vivid Color Modified)
 
## Tabela de Cores
 
ID | Nome | R | G | B | ViCo
:---: | :---: | :---: | :---: | :---: | :---:
#0 | Black | 0 | 0 | 0 | off
#1 | White | 255 | 255 | 255 | white
#2 | Azul | 0 | 0 | 255 | blue
#3 | Verde | 0 | 128 | 0 | green
#4 | Aqua | 0 | 255 | 255 | aqua
#5 | Vermelho | 255 | 0 | 0 | red
#6 | Lilás | 255 | 0 | 255 | purple
#7 | Amarelo | 255 | 255 | 0 | yellow
#8 | Laranja | 183 | 65 | 14 | orange
#9 | Limão | 0 | 255 | 0 | lime
