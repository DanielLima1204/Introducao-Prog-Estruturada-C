#include <stdio.h>

int main() {
    int codigo;
    printf("Digite o codigo de acesso: ");
    scanf("%d", &codigo);
    while(codigo != 4321) {
        printf("Codigo:  %d esta incorreto, digite novamente.\n", codigo);
        printf("Digite o codigo de acesso: ");
        scanf("%d", &codigo);
    }
    printf("ACESSO LIBERADO!");
    return 0;
}