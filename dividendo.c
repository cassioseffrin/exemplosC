#include <stdio.h>

float dividir(float a, float b){
    return (a/b);
}
int main(void){
    float divisor, dividendo, resultado;
    printf("digite o divisor: ");
    scanf("%f", &divisor);
    printf("digite o dividendo: ");
    scanf("%f", &dividendo);
    printf("o numero digitado foi: %10.5f", dividir(divisor,dividendo));
}
