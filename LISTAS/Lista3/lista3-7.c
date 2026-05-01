#include <stdio.h>

int main() {
    float consumo;
    int horarioPico, energiaSolar;

    printf("Digite o consumo atual: ");
    scanf("%f", &consumo);

    printf("Horario de pico? (1/0): ");
    scanf("%d", &horarioPico);

    printf("Possui energia solar? (1/0): ");
    scanf("%d", &energiaSolar);

    // implemente a lógica aqui
    if(horarioPico) {
        if(consumo > 300 && energiaSolar == 0) {
            printf("ALERTA DE ALTO CONSUMO");
        } else {
            printf("CONSUMO CONTROLADO");
        }
    } else {
       if(consumo > 500) {
           printf("ALERTA DE CONSUMO");
       } else {
           printf("CONSUMO NORMAL");
       }
    }

    return 0;
}