# Retlex Color
## Para que serve?
 A biblioteca Color da Retlex, foi feita com o intuito de facilitar o uso de LED e lampadas RGB. O Retlex Color faz você ter muitas opções de ultilização do LED, sem precisar ulizar diversos comandos.
## Quais os metodos que posso ultilizar?
 Existem alguns metodos que você pode usar, e ela vem se desenvolvendo mais e mais, para você conseguir fazer o que quiser com esta biblioteca de forma simples. Para isto veja os metodos abaixo para ultilizar a biblioteca.

 **pinRGB:** Este é o primeiro metodo que você deve ultilizar caso queira ultilizar LED ou lampadas RGB, que contenha 3 terminais. Ele serve para criar um objeto, que contenha em quais pinos os terminais RGB estão conectados. É com ele também que você irá declarar o nome deste objeto, para que você consiga ultilizalo de forma simples. Ele também já define os pinos como OUTPUT.
 *Exemplo: pinRGB led1 (3, 5, 6);*
 **setRGB:** Com este metodo você pode definir a cor do LED, por meio do codigo RGB que vai de 0 a 255.
 *Exemplo: led1.setRGB(255, 255, 255);*
 **setColor:** Com o setColor, você pode definir a cor do LED rapidamente sem precisar de codigo RGB ou de outro tipo. Basta consutar a tabela de cores (que se encontra mais abaixo), e colocar o ID da cor.
 **setClean:** O setClean, faz com que o LED se apague totalmente.
