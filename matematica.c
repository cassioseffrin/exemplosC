#include <stdio.h>

float soma(float x, float y)
{
    return x + y;
}

int main(void)
{
    float a;
    float b;
    printf("digite A: ");
    scanf("%f", &a);
    printf("digite B: ");
    scanf("%f", &b);
    printf("\nResultado: %f", soma(a, b));
}
