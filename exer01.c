#include <stdio.h>

float somar (float a, float b){
    return a+b;
}
float subtrair (float a, float b){
    return a-b;
}
float dividir (float a, float b){
    return a/b;
}
float multiplicar (float a, float b){
    return a*b;
}

float media(){
    float soma=0;
    float vetor[4];
    for (int i=1; i<=3; i++){
        printf("digite o numero %d ", i);
        scanf("%f",&vetor[i]);
    }
    for (int i=1; i<=3; i++){
        soma = soma + vetor[i];
    }

    return soma/3;
}

double fatorial(double numero) {
   if(numero <= 1) {
      return 1;
   }
   return numero * fatorial(numero - 1);
}



int main(){
    // float a,b;
    // printf ("\nDigite o numero a: ");
    // scanf("%f",&a);
    // printf("Digite o numero b: ");
    // scanf("%f",&b);
    // printf("\n\nResultado soma: %.2f ", somar(a,b));
    // printf("\nResultado subtracao: %.2f ", subtrair(a,b));
    // printf("\nResultado divisao: %.2f ", dividir(a,b));
    // printf("\nResultado multiplicacao: %.2f ", multiplicar(a,b));
    // printf("A media é: %f", media());
   
   printf ("fatorial de 4 : %f", fatorial(4) );

   
    printf("\n\nfim de execucao !!!");
    
}

