/* A solucao do problema comecou com a criacao de um vetor dinamico, foram
criados dois lacos para controlar quem morria (0 para mortos e 1 para
matadores), mas como o compilador Turbo C++ 4.5 nao conseguia gerar o
vetor dinamico, implementei o programa para que rodase sem a utilizacao
de vetores. A logica de funcionamento de ambas formas eh a mesma, porem
a versao sem vetores eh mais objetiva e torna o codigo fonte mais
compacto e estavel.*/

#include <stdio.h>

int main(void)
{
  int matador;
  int morre;
  int quant;
  int l = 1;

  char loop = 'n';
  while (loop == 'n')
  {

    printf("\n\nQuantas pessoas entraram na caverna :");
    scanf("%d", &quant);

    while (l != quant)
    {

      morre = 2 * l;
      while (morre > quant)
        morre = 2 * (morre - quant) - 1;
      matador = 2 * l - 1;
      while (matador > quant)
        matador = 2 * (matador - quant) - 1;
      printf("\n%4.0d -|Esfaquiou- %d", matador, morre);
      l++;
    }

    printf("\n\nFim de Aplicacao");
    printf("\n\nJosephus deveria ficar na posicao %d", matador);
    printf("\n\nDigite <n> para nova tentativa ou <*> para finalizar: ");
    scanf("%s", &loop);

    l = 1;
  }
}
