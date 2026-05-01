#include <stdio.h>

int main() {
   int num = 0;
   int total = 0;
   int positivos = 0;
   
   printf("Digite um numero: ");
   scanf("%d", &num);
   
   while(num != 0) {
      total++;
      if(num > 0) {
          positivos++;
      }
    printf("Digite um numero: ");
    scanf("%d", &num);
   }
 
    printf("A quantidade dos numeros digitados: %d\n", total);
    printf("A quantidade de numeros possitivos: %d\n", positivos);
    return 0;
}