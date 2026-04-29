//1º problema
//Desenvolva um programa que leia um número e o mostre 20 vezes.

#include <stdio.h>

int main() {
    int num = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for(int i = 1; i <= 20; i++) {
        printf("%dº - %d\n", i, num);
    }

    return 0;
}