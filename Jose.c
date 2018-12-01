
#include <stdio.h>

int iniciarMatanca(int arr[], int pos, int nroPri)
{
    int vivos = contarVivos(arr, nroPri);
    while (vivos != 1)
    {
        for (int i = pos + 1; i < nroPri; i++)
        {
            if (arr[i] == 1)
            {
                arr[i] = 0;
                pos = passarFaca(arr, i + 1, nroPri);
                break;
            }
            else if (i + 1 == nroPri && contarVivos(arr, nroPri) > 1)
            {
                pos = -1;
            }
        }
        if (pos + 1 == nroPri && contarVivos(arr, nroPri) > 1)
        {
            pos = -1;
        }
        vivos = contarVivos(arr, nroPri);
    }

    for (int i = 0; i < nroPri; i++)
    {
        printf("\n array[%d]: %d", i, arr[i]);
    }
}

int passarFaca(int arr[], int pos, int nroPri)
{
    for (int i = pos; i < nroPri; i++)
    {
        if (arr[i] == 1)
        {
            return i;
            break;
        }
    }
    if (contarVivos(arr, nroPri) > 1)
    {
        return passarFaca(arr, 0, nroPri);
    }
    else
    {
        return 99999;
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


int main(void)
{
    int matador;
    int morre;
    int quant = 10;
    int skip = 1;
    printf("Prisioneiros  :");
    scanf("%d", &quant);
 
    int arr[quant];

    int pos = 0;

    for (int i = 0; i < quant; i++)
    {
        arr[i] = 1;
    }
    iniciarMatanca(arr, pos, quant);
}
