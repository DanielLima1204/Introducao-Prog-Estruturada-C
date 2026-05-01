#include <stdio.h>

int main() {
    int loginOk, dispositivoConhecido, tentativaSuspeita;

    printf("Login correto? (1/0): ");
    scanf("%d", &loginOk);

    printf("Dispositivo conhecido? (1/0): ");
    scanf("%d", &dispositivoConhecido);

    printf("Tentativa suspeita? (1/0): ");
    scanf("%d", &tentativaSuspeita);

    // implemente a lógica aqui
    if(loginOk) {
        if(dispositivoConhecido && tentativaSuspeita == 0) {
            printf("ACESSO LIBERADO");
        } else {
            printf("VERIFICACAO EXTRA NECESSARIA");
        }
    } else {
        printf("ACESSO NEGADO");
    }

    return 0;
}