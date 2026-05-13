// Prática 3
// Leia uma sequência de letras, terminada na letra (”z”), e mostre
// quantas vezes cada vogal (a, e, i, o, u) apareceu, no emulador a
// seguir.

#include <stdio.h>

int main() {
    int quantidadeDeVogais[5] = {0, 0, 0, 0, 0};
    char letraDigitada;
    
    do {
        printf("Digite uma letra: ");
        scanf(" %c", &letraDigitada);
        switch(letraDigitada){
            case 'a':
                quantidadeDeVogais[0]++;
                break;
            case 'e':
                quantidadeDeVogais[1]++;
                break;
            case 'i':
                quantidadeDeVogais[2]++;
                break;
            case 'o':
                quantidadeDeVogais[3]++;
                break;
            case 'u':
                quantidadeDeVogais[4]++;
                break;    
        }
       
    } while((letraDigitada != 'z') && (letraDigitada != 'Z'));
    printf("A quantide de vogais e = a: %d, e: %d, i: %d, o: %d, u: %d \n", quantidadeDeVogais[0], quantidadeDeVogais[1], quantidadeDeVogais[2], quantidadeDeVogais[3], quantidadeDeVogais[4]);
    
    return 0;
}
