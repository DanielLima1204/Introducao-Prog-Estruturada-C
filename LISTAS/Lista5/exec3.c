#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.00;
    float deposito;
    
    do {
        printf("------ Menu -------\n");
        printf("1 - Consultar Saldo\n");
        printf("2 - Depositar\n");
        printf("0 - Sair\n");
        printf("Digite uma dessas opcoes: ");
        scanf("%d", &opcao);
        if(opcao == 1) {
            printf("Seu saldo atual e: %.2f\n", saldo);
        }
        if(opcao == 2) {
            printf("Digite o valor de deposito: ");
            scanf("%f", &deposito);
            if(deposito > 0) {
                saldo = saldo + deposito;
            } else {
                printf("Valor de deposito nao pode ser menor ou igual a zero!\n");
            }
        }
        else {
            printf("Opcao Invalida!\n");
        }
    } while(opcao != 0);
    printf("Programa encerrado!");
  return 0;
}