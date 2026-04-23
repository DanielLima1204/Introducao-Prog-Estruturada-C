#include <stdio.h>

int main() {
    int pessoas, reserva, horario;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &pessoas);

    printf("Tem reserva? (1/0): ");
    scanf("%d", &reserva);

    printf("Digite o horario atual: ");
    scanf("%d", &horario);

    // implemente a lógica aqui
    if(reserva) {
        printf("ATENDIMENTO IMEDIATO");
    } else {
        if((horario >= 12 && horario <= 14) || (horario >= 19 && horario <= 21)) {
            pessoas <= 4 ? printf("ESPERA CURTA") : printf("ESPERA LONGA");
        } else {
            printf("ATENDIMENTO IMEDIATO");
        }
    }

    return 0;
}