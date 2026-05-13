#include <stdio.h>

int main() {
    int numeros[10];
    int pos, posicao;
    int valor = 0, encontrado = 0;
    for(pos = 0; pos < 10; pos++) {
        printf("Digite o %dº valor: ", pos+1);
        scanf("%d", &numeros[pos]);
    }
    
    printf("Digite o valor a buscar: ");
    scanf("%d", &valor);
    
    for(pos = 0; pos < 10; pos++) {
        if(numeros[pos] == valor) {
            encontrado = 1;
            posicao = pos+1;
        }
    }
    
    if(encontrado) {
        printf("Valor econtrado, na posicao: %d!\n", posicao);
    } else {
        printf("Valor não encontrado!\n");
    }
    
    return 0;
}