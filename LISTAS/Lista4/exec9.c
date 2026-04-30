//Leia 10 números e conte positivos, negativos e zeros.
#include <stdio.h>

int main() {
    int positivos = 0; 
    int negativos = 0; 
    int zeros = 0;
    int numero;
    
    for(int i = 0; i < 5; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &numero);
        if(numero > 0) {
            positivos++;
        }
        if(numero < 0) {
            negativos++;
        }
        if(numero == 0) {
            zeros++;
        }
    }
    printf("Positivos: %d, Negativos: %d, Zeros: %d", positivos, negativos, zeros);
    return 0;
}