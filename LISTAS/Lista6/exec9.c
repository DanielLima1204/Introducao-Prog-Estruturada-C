#include <stdio.h>

int main() {
    int a[5], b[5], c[5];
    int pos;
    
    for(pos = 0; pos < 5; pos++) {
        printf("Digite o %dº valor do vetor a: ", pos+1);
        scanf("%d", &a[pos]);
    }
    
    for(pos = 0; pos < 5; pos++) {
        printf("Digite o %dº valor do vetor b: ", pos+1);
        scanf("%d", &b[pos]);
    }
    
    for(pos = 0; pos < 5; pos++) {
        printf("%dº numero vetor a: %d + %dº vetor numero b: %d = %d\n", pos+1, a[pos], pos+1, b[pos], a[pos] + b[pos]);
        c[pos] = a[pos] + b[pos];
        }
    printf("Resultado vetor c: \n");
    for(pos = 0; pos < 5; pos++) {
        printf("%d\t", c[pos]);
    }
    
    return 0;
}