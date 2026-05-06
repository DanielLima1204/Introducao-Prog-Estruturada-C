#include <stdio.h>

int main() {
    int i, status;
    int concluidas = 0; int pendentes = 0;
    for(i = 1; i <= 8; i++) {
        printf("Digite o status da %dª atividade, 1 para conluida e 0 para pendente: ", i);
        scanf("%d", &status);
        if(status == 1) {
            concluidas++;
        } else {
            pendentes++;
        } 
    }
    printf("Atividades concluidas: %d\n", concluidas);
    printf("Atividades Pendentes: %d\n", pendentes);
    return 0;
}