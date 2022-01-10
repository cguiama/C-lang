#include <stdio.h>
#include <string.h>

int main()
{

  char palavrasecreta[20];
  sprintf(palavrasecreta, "MELANCIA");

  int acertou = 0;
  int errou = 0;

  char chutes[26];
  int tentativas = 0;

  do
  {
    for (int i = 0; i < strlen(palavrasecreta); i++)
    {
      int achou = 0;

      for (int j = 0; j < tentativas; j++)
      {
        if (chutes[j] == palavrasecreta[i])
          achou = 1;
        break;
      }
      //if()
    }
  } while (!acertou && !errou);
}

/* Preciso criar um programa, que mostre uma Linha _ quando errar e a letra da forca quando acertar;

  // Para isto, criarei primeiro o loop para que o código seja executado enquanto [i] for menor do que o tamanho da palavra secreta e crio a variavel inteira ~achou = 0;
    // Dentro deste loop, criarei outro loop e uma condicional;
      → Se meu loop de chutes encontrar uma letra que tenha na palavra secreta, achou será igual a 1 pra que ele não se repita e temos um break, para encerrar  o loop
        → Enquanto [j] for menor que a quantidade de tentativas (quantidade = letras do alfabeto, neste caso), j++;
        → se meus chutes na posição [j] forem iguais a palavrasecreta em [i], então ~achou = 1, pois a letra ja estará dentro da variavel chutes e eu posso quebrar o loop.
    // Agora temos uma condição if: que me dará a seguinte informação:
      → if(achou){imprima palavrasecreta na posição [i]}
      → senão{imprima _}
  // Acabamos o loop.

  → Agora chamamos a variavel chute; 
  → Imprimimos a pergunta com printf "Qual seu chute?"
// Aqui gravamos o valor digitado no scanf em chute com &
  → E pedimos a letra com scanf(" %c", &chute);

// Aqui, dizemos ao código que chutes[tentativa] = chute; (chutes[tentativa] recebe o que foi inputado);
  chutes na posição [tentativas] = chute;
  tentativas ++;

por ultimo, fechamos a while dizendo que o programa roda enquanto for contrario de 0 (! representa não)

*/
