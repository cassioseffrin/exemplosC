#include <stdio.h>
#include <math.h>
int main(void)
{
  int val;
  int num;
  int total;
  int i;
  total = 0;

  printf("Digite quantos numeros serao somados: ");
  scanf("%d", &val);
  for (i = 1; i <= val; i++)
  {
    printf("Digite o %d§ valor: ", i);
    scanf("%d", &num);
    total = total + num;
  }
  printf("\nTotal da soma dos %d numeros acima: %d", val, total);
}
