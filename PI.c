#include <stdio.h>
 
#include <math.h>

int main(void)
{
  float val;
  float s;
  float sinal;
  int i;
  val=3;
  s=4;
  sinal=-1;
  for (i=1;i<=20;i++)
  {
	 s+=4*sinal/val;
	 sinal=-sinal;
	 val+=2;
  }
   
  printf("Valor do PI %f", s);
 
}
