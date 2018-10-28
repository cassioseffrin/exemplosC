#include <stdio.h>
#include <math.h>


int main(void)
{
  float val;
  int i=1;
  float media=0;
  float soma=0;
 
  printf("Digite 9999 para finalizar\n\n");
  while (val!=9999)
  {
    printf("Digite o %d Numero: ",i);
    scanf("%f",&val);
    i++;
    soma=(soma+val);
  }
  media=((soma-9999)/(i-2));
  printf("\nA media eh: %f",media);
 
}
