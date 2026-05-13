#include <stdio.h>

int main() {
    int numeros[10];
    int i;
    for(i = 0; i < 10; i++) {
       printf("Digite o %dº numero: ", i+1);
       scanf("%d", &numeros[i]);
    }
    for(int pos = 0; pos < 10; pos++) {
        printf("%dº numero digitado: %d\n", pos+1, numeros[pos]);
        printf("-----------------------------------------------\n");
    }

    
    return 0;
}