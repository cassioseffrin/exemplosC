
#include <stdio.h>
float media(){
    float soma=0;
    float entrada = 0;
    int contador = 0;
    while (entrada != 99){
        printf("digite a nota %d : ", contador+1);
        scanf("%f", &entrada);
        if (entrada != 99){
            soma = soma + entrada;
            contador = contador + 1;
        }
    }
    return soma/(contador);
}
int main(){
    printf("\n\nA media é: %.2f", media2());
    printf("\n\nfim de execucao !!!");
}

