#include <stdio.h>

int main() {
    int pos;
    float vendas[7];
    float maior;
    int diaMaior;

    for(pos = 0; pos < 7; pos++) {
        printf("Digite o total de vendas do %dº dia: ", pos+1);
        scanf("%f", &vendas[pos]);
    }
    for(pos = 0; pos < 7; pos++) {
        if(vendas[pos] > maior) {
            maior = vendas[pos];
            diaMaior = pos+1;
        }
    }
    
    printf("O dia com a maior venda foi o %dº com o total de: %.2f", diaMaior, maior);

    return 0;
}