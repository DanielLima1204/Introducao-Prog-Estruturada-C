#include <stdio.h>

int main() {
    int nota, continuar;
    int quantidade = 0, soma = 0;
    float media;
    
    do {
        printf("Digite uma nota entre 1 (nada satisfeito) a 5 (muito satisfeito): ");
        scanf("%d", &nota);
        if(nota >= 1 && nota <= 5) {
            quantidade++;
            soma += nota;
        } else {
           printf("NOTA INVALIDA!\n"); 
        }
        printf("Deseja Continuar? 1 - SIM e 0 - NÃO \n");
        scanf("%d", &continuar);
    } while(continuar != 0);
    
    if(quantidade > 0) {
      media = (float) soma / quantidade;
      printf("Media: %.2f\n", media);
    } else {
        printf("Nenhuma nota valida registrada.\n");    
    }

    return 0;
}