#include <stdio.h>

int main() {
   int num = 0;
   int quantidade = 0;
   for(int i = 0; i < 10; i++) {
       printf("Digite o %dº numero: ", i+1);
       scanf("%d", &num);
       if(num > 50) {
            quantidade++;
       }
   }
    printf("A quantidade dos numeros maiores que 50 e: %d\n", quantidade);
    return 0;
}