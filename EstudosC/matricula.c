/*(a) Crie um programa que defina uma struct chamada Aluno contendo nome, matrícula e nota. Peça ao usuário 
os dados de três alunos e depois exiba essas informações.*/

#include <stdio.h>

struct Aluno{
    char nome[20];
    int matricula;
    float nota;
};

int main(){
    struct Aluno estudante[3];
    int i;

    for(i=0;i<3;i++){
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", estudante[i].nome);
        printf("Digite a matricula do aluno %d: ", i+1);
        scanf("%d", &estudante[i].matricula);
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &estudante[i].nota);
    }

     for(i=0;i<3;i++){
        printf("Nome do aluno %d: %s | ", i+1, estudante[i].nome);
        printf("Matricula do aluno %d: %d | ", i+1, estudante[i].matricula);
        printf("Nota do aluno %d: %.2f ", i+1, estudante[i].nota);
        printf("\n");
    }

    return 0;
}