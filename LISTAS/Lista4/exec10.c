//Leia 5 números e determine o maior e o menor.
#include <stdio.h>

int main() {
    int posicaoMaior = 0;
    int posicaoMenor = 0;
    int maior; 
    int menor; 
    int numero;
    
    for(int i = 0; i < 5; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &numero);
        
        if(i == 0) {
            maior = numero;
            menor = numero;
            posicaoMaior = i+1;
            posicaoMenor = i+1;
        }
        
        if(numero > maior) {
            maior = numero;
            posicaoMaior = i+1;
        }
        if(numero < menor) {
            menor = numero;
            posicaoMenor = i+1;
        }
    }
    printf("O maior numero foi o %dº: %d\nO menor foi o %dº: %d", posicaoMaior, maior, posicaoMenor, menor);
    return 0;
}