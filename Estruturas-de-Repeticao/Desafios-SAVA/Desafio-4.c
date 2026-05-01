//4º problema
//Desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média aritmética e a situação de aprovação de cada um deles. Lembre-se de que apenas a média igual ou acima de 7 aprova o aluno.
//Lógica: precisamos de 3 variáveis do tipo real (float) para armazenar as notas de cada aluno, uma variável real para armazenar a média das notas e uma variável inteira (int) para controlar a repetição.
//Repetir 40 vezes (comando de repetição PARA):
//Ler nota1, nota2 e nota3 de cada aluno (comando de entrada de dados).
//Calcular a média do aluno: (nota1+nota2+nota2) /3.
//Se a média do aluno for > = 7, exibir aluno aprovado e sua média; senão, exibir aluno reprovado e sua média.

#include <stdio.h>

int main() {
    float primeiraNota = 0;
    float segundaNota = 0;
    float terceiraNota = 0;
    float somaNotas = 0;
    float mediaAluno = 0;
    
    
    for(int i = 1; i <= 4; i++) {
        printf("Digite a 1º nota: ", i);
        scanf("%f", &primeiraNota);
        printf("Digite a 2º nota: ", i);
        scanf("%f", &segundaNota);
        printf("Digite a 3º nota: ", i);
        scanf("%f", &terceiraNota);
        
        somaNotas = primeiraNota + segundaNota + terceiraNota;
        mediaAluno = somaNotas / 3;
        if(mediaAluno >= 7.0) {
            printf("Media do Aluno: %.1f, Esse aluno está aprovado!\n", mediaAluno);
        } else {
            printf("Media do Aluno: %.1f, Esse aluno está reprovado!\n", mediaAluno);    
        }
    }

    return 0;
}