// Prática 1
// Faça um programa que leia 100 números inteiros e mostre-os na ordem inversa em que foram lidos. Em relação à estrutura de dados, o vetor vai armazenar 100 números inteiros.

#include <stdio.h>

int main() {
    int tamanhoArr = 10;
    int numeros[tamanhoArr];
    
    for(int i = 0; i < tamanhoArr; i++) {
        printf("Leia o %dº numero: ", i+1);
        scanf("%d", &numeros[i]);
    }
    for(int i = tamanhoArr - 1; i >= 0; i--) {
        printf("%dº -  numero:  %d\n", i+1, numeros[i]);
    }

    return 0;
}