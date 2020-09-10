#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// função ordenar_num, receendo o vetor "numero", o identificando como vetor "num"
void ordenar_num(int num[6])
{

    int i, j, aux;
    //primeiro laço do método bola
    for (i = 0; i < 6; i++)
    { //segundo laço do método bolha
        for (j = i + 1; j <= 5; j++)
        { //verifica se o vetor na posição J é menor que o veotor na posicao I;
            if (num[j] < num[i])
            { // caso seja Menor, realiza a troca de numeros para organizar
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }
    printf("Apos a Organizacao: ");
    //Imprimir o Vetor
    for (i = 0; i < 6; i++)
    {
        printf("%i \t", num[i]);
    }
    printf("\n");
}

int main()
{

    int i, j, numero[6];
    srand(time(0));

    for (i = 0; i < 6; i++)
    {
        numero[i] = rand() % 60;
    }

    //verifica se há numeros igual
    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j <= 5; j++)
        {
            do
            {
                if (numero[j] == numero[i])
                {
                    numero[i] = rand() % 60 +1;
                }
            } while (numero[j] == numero[i]);
        }
    }

    printf("Antes da Organizacao: ");
    //sortear os numeros
    for (i = 0; i < 6; i++)
    {
        printf(" %i \t", numero[i]);
    }
    printf("\n");
    //chama a função ordenar_num, passando o vetor "numero"
    ordenar_num(numero);

 
    return 0;
}
