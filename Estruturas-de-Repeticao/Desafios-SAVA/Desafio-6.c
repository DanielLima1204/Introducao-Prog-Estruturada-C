#include <stdio.h>

int main() {
    int num = 0;
    int numDigitado = 0;
    int somaPares = 0;
    int somaImpares = 0;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &numDigitado);
        if(numDigitado % 2 == 0) {
            somaPares += numDigitado;
        } else {
            somaImpares += numDigitado;
        }
    }
    printf("A soma dos numeros pares e: %d\n", somaPares);
    printf("A soma dos numeros impares e: %d\n", somaImpares);

    return 0;
}