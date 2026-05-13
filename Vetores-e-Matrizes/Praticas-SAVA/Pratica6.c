///Prática 6
// Considere o seguinte problema em uma escola primária: 
// em uma turma com 50 alunos, cada um faz 3 provas por semestre.
// Além de armazenar as 3 provas dos 50 alunos, existe a necessidade de mostrar:
// A média de cada prova;
// A média de cada aluno;
// A média da turma.

#include <stdio.h>

int main() {
    char alunos[10][20] = {
        "Daniel", "Carlos", "Keila", "Josy", "Renan", "Pedro",
        "Ian", "Jorge", "Gleice", "Diane"
    };
    float notasPrimeiraProva[10];
    float notasSegundaProva[10];
    float notasTerceiraProva[10];
    
    for(int i = 0; i < 10; i++) {
        for(int x = 1; x <= 3; x++) {
            printf("Digite a nota da %dº prova para o aluno %s: ", x, alunos[i]);
           if(x == 1) {
               scanf("%f", &notasPrimeiraProva[i]);
           }
           if(x == 2) {
               scanf("%f", &notasSegundaProva[i]);
           }
           if(x == 3) {
               scanf("%f", &notasTerceiraProva[i]);
           }
        }
       
    }