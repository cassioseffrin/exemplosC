#include <stdio.h>

int fib(int n)
{
  int fibo=0;
  if (n==0 || n==1) return(n);
  else
  {
	 fibo=fib(n-2)+fib(n-1);
	 return(fibo);
  }
}

int main(void)
{
  int s;
  printf("Digite um numero inteiro: ");
  scanf("%d",&s);
  printf("O Fibonacci eh: %d",fib(s));
}