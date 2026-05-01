#include <stdio.h>

int main() {
    float distancia, valor;
    int motoristaDisponivel;

    printf("Digite a distancia da corrida: ");
    scanf("%f", &distancia);

    printf("Digite o valor estimado: ");
    scanf("%f", &valor);

    printf("Motorista disponivel? (1/0): ");
    scanf("%d", &motoristaDisponivel);

    // implemente a lógica aqui
    if(motoristaDisponivel) {
        distancia <= 10 || valor >= 30 ? printf("CORRIDA ACEITA") : printf("CORRIDA RECUSADA POR BAIXA RENTABILIDADE");  
    } else {
        printf("SEM MOTORISTAS DISPONIVEIS");
    }
    return 0;
}