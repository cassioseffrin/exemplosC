 
#include <stdio.h>

double fatorial(double a) {
   if(a <= 1) {
      return 1;
   }
   return a * fatorial(a - 1);
}













int main(){
 
    printf("\nfatorial de 6: %.1f", fatorial(60)/(fatorial(6)*fatorial(54)));
    printf("\nfatorial de 5: %.1f", fatorial(60)/(fatorial(5)*fatorial(55)));
    printf("\nfatorial de 4: %.1f", fatorial(60)/(fatorial(4)*fatorial(56)));
   
    printf("\n\nfim de execucao !!!");
    
}
  