#include <stdio.h>

#define FIM 9
int main(){
    int i;
    int soma = 0;
    for (i = 1; i <= FIM; i = i + 2) {
        soma += i;
    }

    printf("Somatoria %i ", soma);

    float n1 = 7;
    float n2 = 3;
    float resultado = n1 / n2;
    int resto = 5 % 2;

    printf("\nResultado: %G", resultado);
    printf("\nResto: %i", resto);

    return 0;
}