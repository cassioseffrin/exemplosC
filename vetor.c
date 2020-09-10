#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n[10];
    int i, j;

    for (i = 0; i < 10; i++)
    {
        n[i] = i + 100;
    }

    for (j = 0; j < 10; j++)
    {
        printf("elemento[%d] = %d\n", j, n[j]);
    }

    int ran = rand();
    printf("randomico : %d ", ran);

    int lowerLimit = 10, upperLimit = 50;
    int r = lowerLimit + rand() % (upperLimit - lowerLimit);
    printf("%d", r);
    return 0;
}