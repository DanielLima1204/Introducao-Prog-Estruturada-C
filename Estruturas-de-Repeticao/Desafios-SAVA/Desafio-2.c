//2º problema
//Desenvolva um programa que leia 15 números inteiros e positivos e mostre o maior deles.
//Lógica: precisamos de 3 variáveis do tipo inteiro (int) para armazenar cada número a ser lido, o maior dos números e controlar a repetição.
//Inicializar a variável maior com zero.
//Repetir 20 vezes (comando de repetição PARA):
//Ler o número (comando de entrada de dados).
//Se o número for superior à variável maior, ela recebe o conteúdo do número lido.
//Exibir o conteúdo da variável maior (comando de exibição de dados).

#include <stdio.h>

int main() {
    int numDigitado = 0;
    int maior = 0;
    int posicaoMaior = 0;
    for(int i = 1; i <= 15; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &numDigitado);
        if(numDigitado > maior) {
            maior = numDigitado;
            posicaoMaior = i;
        }
    }
    printf("O maior numero digitado foi o %dº: %d", posicaoMaior, maior);

    return 0;
}