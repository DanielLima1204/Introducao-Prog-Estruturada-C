//Leia números até a soma ultrapassar 100.
#include <stdio.h>

int main() {
    int soma = 0;
    int numero = 0;
    
    while(soma < 100) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
    }
    printf("A soma dos numeros e: %d", soma);
    return 0;
}