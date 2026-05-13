//Prática 5
//Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. 
//Na sequência, leia uma lista de 10 números inteiros e verifique se cada um 
//deles está contido em alguma posição do vetor. Em caso positivo, mostre a posição do vetor 
//em que ele se encontra.

#include <stdio.h>

int main() {
    int numerosDigitados[10];
    int numeroParaTeste = 0;
    int posicao;
    
    for(int i = 1; i <= 10; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &numerosDigitados[i]);
    }
    
    for(int x = 1; x < 50; x++) {
        printf("Digite um numero para teste: ");
        scanf("%d", &numeroParaTeste);
        
        for(int y = 0; y <= 10; y++) {
            if(numerosDigitados[y] == numeroParaTeste) {
                posicao = y;
                break;
            } else {
                posicao = -1;
            }
        }
        posicao != -1 ? printf("Numero encontrado na posição: %d\n", posicao) : printf("Numero não esta armazenado.\n");
    }
    
    return 0;
}