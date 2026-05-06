#include <stdio.h>

int main() {
    int prioridade, continuar;
    int baixa = 0, media = 0, alta = 0;
    do {
        printf("Digite o nivel de prioridade: \n");
        printf("1 == Prioridade Baixa\n");
        printf("2 == Prioridade Media\n");
        printf("3 == Prioridade Alta\n");
        printf("Digite uma das opcoes: ");
        scanf("%d", &prioridade);
        if(prioridade == 1) {
            baixa++;
        } else if(prioridade == 2) {
            media++;
        } else if(prioridade == 3) {
            alta++;
        } else {
            printf("PRIORIDADE INVALIDA\n");
        }
        printf("Deseja Continuar? ");
        scanf("%d", &continuar);
        
    } while(continuar != 0);
    
    return 0;