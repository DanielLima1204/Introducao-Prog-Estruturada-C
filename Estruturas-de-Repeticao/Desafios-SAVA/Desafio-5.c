#include <stdio.h>

int main() {
    float reajuste = 0;
    float salarioDigitado = 0;
    float salarioReajustado = 0;
    float maiorSalarioReajustado = 0;
    
    printf("Digite o valor de reajuste: ");
    scanf("%f", &reajuste);
    
    for(int i = 1; i <= 2; i++) {
        printf("Digite o salario: ");
        scanf("%f", &salarioDigitado);
        salarioReajustado = salarioDigitado + (salarioDigitado * (reajuste / 100));
        if(salarioReajustado > maiorSalarioReajustado) {
            maiorSalarioReajustado = salarioReajustado;
        } 
        printf("O salario após reajuste sera: %.2fR$\n", salarioReajustado);
    }
    printf("O maior salario reajustado foi: %.2fR$", maiorSalarioReajustado);
    return 0;
}