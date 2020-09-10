#include <stdio.h>

int josephus(int pessoas, int ignorar){
    if (pessoas == 1){
        return 1;
    }else{
        return (josephus(pessoas - 1, ignorar) + ignorar - 1) % pessoas + 1;
    }
}

int main()
{
    int pessoas = 5;
    int ignorar = 3;
    printf("Vencedor: %d", josephus(pessoas, ignorar));
    return 0;
}
