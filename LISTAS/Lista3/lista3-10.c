#include <stdio.h>

int main() {
    float cpu, memoria;
    int erroCritico;

    printf("Digite o uso de CPU: ");
    scanf("%f", &cpu);

    printf("Digite o uso de memoria: ");
    scanf("%f", &memoria);

    printf("Ha erro critico? (1/0): ");
    scanf("%d", &erroCritico);

    // implemente a lógica aqui
    if(erroCritico) {
        printf("ALERTA MAXIMO");
    } else {
        if(cpu > 80 && memoria > 80) {
            printf("ALERTA ALTO");
        } else if(cpu > 80 || memoria > 80) {
            printf("ALERTA MEDIO");
        } else {
          printf("FUNCIONAMENTO NORMAL");  
        } 
    }
    return 0;
}