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
    //Preenchendo array com os numeros do user
    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &numerosDigitados[i]);
    }
    //Depois que array de numeros esta completo, posso analisa-lo
    for(int i = 0; i < 10; i++) {
        if(numerosDigitados[i] % 2 == 0) {
            numerosProcessados[i] = numerosDigitados[i+1];
        } else {
            if(i != 0) {
                numerosProcessados[i] = numerosDigitados[i-1];
            } else {
                numerosProcessados[i] = numerosDigitados[i];
            }
            
        }
    }
    printf("Novo array com numeros processados: \n");
    for(int i = 0; i < 10; i++) {
        printf("%d - ", numerosProcessados[i]);
    }
    return 0;
}