#include <stdio.h>

int main() {
    int biometria, senha, modoSeguro;

    printf("Digite a biometria (1/0): ");
    scanf("%d // implemente a lógica aqui", &biometria);

    printf("Digite a senha (1/0): ");
    scanf("%d", &senha);

    printf("Digite o modo seguro (1/0): ");
    scanf("%d", &modoSeguro);

    // implemente a lógica aqui
    if(modoSeguro) {
       if(senha) {
           printf("DESBLOQUEADO!");
       } else {
           printf("BLOQUEADO!");
       }
        
    } else {
        if(senha || biometria) {
            printf("DESBLOQUEADO");
        } else {
            printf("BLOQUEADO");
        }
    }

    return 0;
}