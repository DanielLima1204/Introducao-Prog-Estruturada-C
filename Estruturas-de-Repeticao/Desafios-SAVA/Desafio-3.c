//3º problema
//Desenvolva um programa que leia o salário de 10 funcionários de uma empresa, calcule e mostre o maior salário e a média salarial da empresa.
//Lógica: precisamos de 4 variáveis do tipo real (float), para armazenar cada salário a ser lido, o maior salário, a soma salarial — para calcular a média — e a média salarial, além de uma variável inteira (int) para controlar a repetição.
//Inicializar com zero as variáveis: maior e soma.
//Repetir 10 vezes (comando de repetição PARA):
//Ler o salário do funcionário (comando de entrada de dados).
//Se o salário for superior à variável maior, ela recebe o conteúdo do salário lido.
//Acumular a soma dos salários na variável soma.
//Calcular a média salarial, dividindo a soma dos salários por 10 (total de funcionários).
//Exibir o conteúdo das variáveis maior e média (comando de exibição de dados).

#include <stdio.h>

int main() {
    float salarioDigitado = 0;
    float maiorSalario = 0;
    float somaSalario = 0;
    float mediaSalarios = 0;
    int posicaoMaior = 0;
    
    for(int i = 1; i <= 10; i++) {
        printf("Digite o %dº salario: ", i);
        scanf("%f", &salarioDigitado);
        somaSalario = somaSalario + salarioDigitado;
        if(salarioDigitado > maiorSalario) {
            maiorSalario = salarioDigitado;
            posicaoMaior = i;
        }
    }
    printf("O maior salario e o %dº: %.2f\n", posicaoMaior, maiorSalario);
    printf("A soma dos salarios é: %.2f\n", somaSalario);
    printf("A media dos salarios é: %.2f\n", somaSalario / 4);

    return 0;
}