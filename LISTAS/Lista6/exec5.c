#include <stdio.h>

int main() {
    float numeros[6];
    int pos;
    float media, soma = 0;
    
    for(pos = 0; pos < 6; pos++) {
        printf("Digite o %dº numero: ", pos+1);
        scanf("%f", &numeros[pos]);
        soma += numeros[pos];
    }
    media = soma / 6;
    printf("A média é igual: %.2f", media);
    
    return 0;
}