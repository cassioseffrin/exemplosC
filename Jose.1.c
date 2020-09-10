
#include <stdio.h>

int matarProximo(int arr[], int pos, int nroPri)
{


    int vivos = contarVivos(arr, nroPri);
    while ( vivos != 1 ){


    //    if (pos >= nroPri){
    //         pos=0;
    //     }

        for (int i = pos + 1; i < nroPri; i++)
        {
            if (arr[pos + 1] == 1)
            {
                arr[pos + 1] = 0;
                // return pos + 1;
                pos = passarFaca( arr,pos + 1, nroPri );
                if (pos >= nroPri){
                    pos = passarFaca( arr,-1, nroPri );
                }
                break;
            }
        }
        if (pos==99){
            vivos=1;
        }else{
            vivos = contarVivos(arr, nroPri);
        }
       
    } 


    for ( int i=0 ; i<nroPri; i++){
        printf("\n array[%d]: %d", i, arr[i]);
    }

}

int passarFaca(int arr[], int pos, int nroPri)
{

    if (pos >= nroPri){
        pos=-1;
    }
    int found=0;
    for (int i = pos + 1; i < nroPri; i++)
    {
        if (arr[i + 1] == 1)
        {
            found=1;
            return i+1;
            break;
        }
    }
    if (found == 0 && contarVivos(arr, nroPri) > 1){
        pos=-1;
       return  passarFaca(arr,pos,nroPri);
    }else {
        return 99;
    }
}

int contarVivos(int arr[], int quant)
{
    int vivos = 0;
    for (int i = 0; i < quant; i++)
    {
        if (arr[i] == 1)
        {
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

    for (int i = 0; i < quant; i++)
    {
        arr[i] = 1;
        // printf("\nArray[%d]: %d", i, arr[i]);
    }
    // inicia o processo
    for (int i = 0; (pos + skip) < quant; i++)
    {
        arr[pos + skip] = 0;
        pos = pos + skip + 1;
    }

 

    printf("\nVivos: %d \n", contarVivos(arr, quant));

    //imprime resultado
    for (int i = 0; i < quant; i++)
    {
        printf("\nArray[%d]: %d", i, arr[i]);
    }
    return 0;
}

int main(void)
{
    int matador;
    int morre;
    int quant=11;
    int skip = 1;
    // printf("Prisioneiros  :");
    // scanf("%d", &quant);
    // printf("resultado: %d", calcular(quant));
    int arr[quant];

    int pos = 0;
 

    for (int i = 0; i < quant; i++)
    {
        arr[i] = 1;
       
    }
    matarProximo( arr, pos,quant );

}
