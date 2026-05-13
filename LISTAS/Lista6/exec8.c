#include <stdio.h>

int main() {
    int numeros[10];
    int pos;
    
    for(pos = 0; pos < 10; pos++) {
        printf("Digite o %dº valor: ", pos+1);
        scanf("%d", &numeros[pos]);
        if(numeros[pos] < 0) {
            numeros[pos] = 0;
        }
    }
    
    for(pos = 0; pos < 10; pos++) {
        printf("%dº numero: %d\n", pos+1, numeros[pos]);
    }
    
    return 0;
}