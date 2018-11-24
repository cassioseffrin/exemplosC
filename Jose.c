
#include <stdio.h>

int contarVivos (int arr[], int quant ){
    int vivos=0;
     for (int i = 0; i < quant; i++){
       if ( arr[i] == 1){
           vivos++;
       }
    }
    return vivos;
}

int calcular(int quant)
{
    printf("Prisioneiros  : %d", quant);
    int arr[quant];

    int pos = 0;
    int skip = 1;

    for (int i = 0; i < quant; i++){
        arr[i] = 1;
        // printf("\nArray[%d]: %d", i, arr[i]);
    }
    // inicia o processo
    for (int i = 0;  (pos+skip) < quant; i++) {
        arr[pos+skip]=0; 
        pos = pos+skip+1;
    }

    // fazer esta parte 
    // int vivos = quant;
    // while( vivos == 1){
    //     for (int i = 0;  (pos+skip) < quant; i++) {
    //         arr[pos+skip]=0; 
    //         pos = pos+skip+1;
    //     }
    //     vivos = contarVivos(arr, quant);
    // } 


    printf("\nVivos: %d \n", contarVivos(arr, quant));

    //imprime resultado
   for (int i = 0; i < quant; i++){ 
         printf("\nArray[%d]: %d", i, arr[i]);
    }
    return 0;
}

int main(void)
{
    int matador;
    int morre;
    int quant;
    int skip = 1;
    printf("Prisioneiros  :");
    scanf("%d", &quant);
    printf("resultado: %d", calcular(quant));
}
