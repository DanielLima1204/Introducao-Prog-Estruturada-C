#include <stdio.h>

int main() {
    int numeros[12];
    int pos;
    int pares = 0;
    
    for(pos = 0; pos < 12; pos++) {
       printf("Digite o %dº numero: ", pos+1);
       scanf("%d", &numeros[pos]);
       if(numeros[pos] % 2 == 0) {
           pares = pares + 1;
       }
    }
    printf("Quantidade de pares: %d", pares);
    
    return 0;
}