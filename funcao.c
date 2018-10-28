/*escrever uma funcao que recebe dois valores x e y e retorna a seguinte expressao:

f(x,y) = x2 y + x3 y2 + 3y -6y3
_______________________________
		 3x3 y4 + 6x2 +12
*/

#include<stdio.h>

float funcao(float x, float y)
{
  float x1=x*x;
  float y1=y*y;
  float fx;

  fx=(x1*y+x1*x*y1+3*y-6*y*y)/(3*x1*x*y1*y1+6*x1+12);

  return(fx);
}

int main(void)
{
  float a;
  float b;
  printf("digite x: ");
  scanf("%f", &a);
  printf("digite y: ");
  scanf("%f", &b);
  printf("\nResultado: %f", funcao(a,b));
}
