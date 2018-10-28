#include <stdio.h>

int fatorial(unsigned int i) {

   if(i <= 1) {
      return 1;
   }
   return i * fatorial(i - 1);
}

int  main() {
   int i = 7;
   printf("fatorial de %d é %d\n", i, fatorial(i));
   return 0;
}