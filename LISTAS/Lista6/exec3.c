#include <stdio.h>

int main() {
    int numeros[10];
    int pos, posicao, maior = 0;
    for(pos = 0; pos < 10; pos++) {
       printf("Digite o %dº numero: ", pos+1);
       scanf("%d", &numeros[pos]);
       if(numeros[pos] > maior) {
           maior = numeros[pos];
           posicao = pos+1;
       }
    }
    printf("O maior numero digitado é: %d na posição: %dº", maior, posicao);
    
    return 0;
}