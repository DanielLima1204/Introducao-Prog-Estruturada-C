//Prática 2
//Faça um programa que leia a nota de 20 alunos da turma e mostre as que são iguais ou
//superiores à média da turma.

#include <stdio.h>

#define quantidadeDeNotas 4

int main() {
    float notasAlunos[quantidadeDeNotas];
    float somaNotas = 0;
    float mediaTurma = 0; 
    
    for(int i = 0; i < quantidadeDeNotas; i++) {
        printf("Digite a nota do %dº aluno:", i+1);
        scanf("%f", &notasAlunos[i]);
        somaNotas = somaNotas + notasAlunos[i];
    }
    
    mediaTurma = somaNotas / quantidadeDeNotas;
    printf("A media das notas da turma e: %.1f\n", mediaTurma);
    printf("As notas maiores ou iguais a media da sala sao: \n");
    
    for(int i = 0; i < 4; i++) {
        if(notasAlunos[i] >= mediaTurma) {
            printf("A %dº nota: %.1f\n", i+1, notasAlunos[i]);
        }
    }
   
    return 0;
}