#include <stdio.h>

void potencia(int m);

int main()
{
  int numero;
  printf("Qual o multiplicador você quer?");
  scanf("%d", &numero);

  for (int i = 0; i <= 10; i++)
  {
    int multiplicacao = numero * i;
    printf("%d x %d = %d\n", numero, i, multiplicacao);
  }
}