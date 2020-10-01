
#include <stdio.h>
double fatorial(double a)
{
   if (a <= 1)
   {
      return 1;
   }
   return a * fatorial(a - 1);
}

int main()
{
   printf("\nProbabilidade de acertar as 6 dezenas (sena): %.1f", fatorial(60) / (fatorial(6) * fatorial(54)));
   printf("\nProbabilidade de acertar as 5 dezenas (quina): %.1f", fatorial(60) / (fatorial(5) * fatorial(55)));
   printf("\nProbabilidade de acertar as 4 dezenas (quadra): %.1f", fatorial(60) / (fatorial(4) * fatorial(56)));
   printf("\nProbabilidade de acertar as 3 dezenas (terno): %.1f", fatorial(60) / (fatorial(3) * fatorial(57)));
   printf("\n\nfim de execucao !!!");
}
