#include <stdio.h>

int main() {
    //Como ja estou aprendendo arrays adicinei uma funcionalidade a mais
    //utilizando array.
    float temperaturasLidas[12];
    
    int i;
    float temperatura;
    int seguras = 0, risco = 0;
    for(i = 1; i <= 12; i++) {
        printf("Digite a %dª leitura de temperatura: ", i);
        scanf("%f", &temperatura);
        temperaturasLidas[i-1] = temperatura;
        if(temperatura <= 75.0) {
            seguras++;
        } else {
            risco++;
        }
    }
    
    //Como ja estou aprendendo arrays adicinei uma funcionalidade a mais
    //utilizando array.
    printf("Temperaturas Lidas: \n");
    for(int i = 0; i < 12; i++) {
        printf("%dª -- %.2f ºC\n", i+1, temperaturasLidas[i]);
    }
    
    printf("Leituras seguras: %d\n", seguras);
    printf("Leituras de risco: %d\n", risco);
    return 0;
}