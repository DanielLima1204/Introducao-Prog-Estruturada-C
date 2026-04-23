#include <stdio.h>

int main() {
    int idade, genero, acompanhado;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o genero preferido (1-acao, 2-comedia, 3-terror): ");
    scanf("%d", &genero);

    printf("Esta acompanhado? (1/0): ");
    scanf("%d", &acompanhado);

    // implemente a lógica aqui
    if(idade < 18) {
        if(genero == 3) {
            printf("TERROR NAO RECOMENDADO");
        } else {
            printf("RECOMENDAR NORMALMENTE");
        }
    }
    if(idade >= 18) {
        if(genero == 3 && acompanhado == 0) {
            printf("RECOMENDAR COM AVISO");
        } else {
            printf("RECOMENDAR NORMALMENTE");
        }
    }

    return 0;
}