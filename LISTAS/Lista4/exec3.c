#include <stdio.h>

int main() {
   int num = 0;
   int soma = 0;
   for(int i = 1; i <= 5; i++) {
       printf("Digite o %dº numero: ", i);
       scanf("%d", &num);
       if(num > 0) {
            soma = soma + num;
       }
   }
    printf("A soma dos numeros e: %d\n", soma);
    return 0;
}