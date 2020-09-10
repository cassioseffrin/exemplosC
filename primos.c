/*
25/08/18 – Autor: Cassio
Algoritmo escrito em C que encontra e imprime os numeros primos presentes 
entre 1 e 200. Calcula e imprime a quantidade total de 
numeros encontrados nesse intevaldo 
*/
#include <stdio.h>


int main(){
    int quantidade = 0;
    int contador = 0;
    int contadorPrimos = 0;
    int soma = 0;
    for (int i = 1; i <= 20; i++) {
        quantidade = quantidade + 1;
        contador = 0;
        for (int j = 1; j <= i; j++){
            if (i % j == 0){
                contador++;
            }
        }
        if (contador == 2) {
            printf("Primo %d: \n", i);
            contadorPrimos = contadorPrimos + 1;
            soma += i;
        }
    }
    printf("A soma eh: %d \n", soma);
    printf("Total de primos encontrados entre 1 e 20: %d \n", contadorPrimos);
    return 0;
}