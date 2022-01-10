#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  printf("************************************\n");
  printf("* Bem vindo ao Jogo de Adivinhação *\n");
  printf("************************************\n");

  int chute;
  int tentativas = 1;
  double pontos = 1000;

  //definindo dificuldade
  int nivel;
  printf("Qual nível de dificuldae?\n");
  printf("(1) Fácil (2)Médio (3)Difícil\n\n");
  printf("Escolha: ");
  scanf("%d", &nivel);

  int numerodetentativas;

  //switch(){} funciona como função if, onde case são os ifs e default = else;
  switch (nivel)
  {
  case 1:
    numerodetentativas = 20;
    break;
  case 2:
    numerodetentativas = 12;
    break;
  default:
    numerodetentativas = 6;
    break;
  }

  int tentativasperdidas = (numerodetentativas - 1);
  int acertou = 0;

  srand(time(0));
  int numerosecreto = rand() % 100;

  //Também podemos utilizar While
  for (int i = 1; i <= numerodetentativas; i++)
  {

    printf("Qual é o seu %dº. chute?\n", tentativas);
    scanf("%d", &chute);

    printf("Seu %dº. chute foi %d\n\n", tentativas, chute);

    if (chute < 0)
    {
      printf("Você não pode chutar números negativos\n");
      continue;
    }

    acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;

    if (acertou)
    {
      break;
    }

    else if (maior)
    {
      printf("Seu chute foi maior do que o número secreto!\n\n");
      if (tentativasperdidas >= 1)
      {
        printf("Você tem mais %d tentativas.\n\n", tentativasperdidas);
      }
      else
      {
        printf("Você não tem mais tentativas.");
      }
    }

    else
    {
      printf("Seu chute foi menor do que o número secreto!\n\n");
      if (tentativasperdidas >= 1)
      {
        printf("Você tem mais %d tentativas.\n\n", tentativasperdidas);
      }

      else
      {
        printf("Você não tem mais tentativas.");
      }
    }

    tentativas++;
    tentativasperdidas--;
  }

  double pontosperdidos = abs(chute - numerosecreto) / 2.0;
  pontos = pontos - pontosperdidos;

  if (acertou)
  {
    printf("Parabéns! Você acertou!\n\n");
    printf("Você acertou em %d tentativas!\n\n", tentativas);
    printf("Você fez %.2f pontos\n\n", pontos);
    printf("Obrigado por jogar!\n");
  }
  else
  {
    printf("Você perdeu!\n\nTente de novo.\n");
  }
}
