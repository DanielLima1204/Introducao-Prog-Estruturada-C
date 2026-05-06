// Prática 4
//Faça um algoritmo que leia 50 números inteiros e armazene-os em
//um vetor. Copie para um segundo vetor de 50 números inteiro cada 
//elemento do primeiro, observando as seguintes regras:
// 1 - Se o número for par, preencha a mesma posição do segundo
//vetor com o número sucessor do contido na mesma posição do 
//primeiro vetor;
// 2 - Se o número for ímpar, preencha a mesma posição do segundo 
//vetor com o número antecessor do contido na mesma posição do
//primeiro vetor.

#include <stdio.h>

int main() {
    int numerosDigitados[10];
    int numerosProcessados[10];
    
    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &numerosDigitados[i]);
    }
    
    return 0;
}