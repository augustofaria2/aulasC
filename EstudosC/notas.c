//Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e
//exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um
//valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve
//ser informado ao usuário e o programa termina.

#include <stdio.h>

int main(){

    float media;
    float nota1, nota2;

    printf("Digite a nota 1:\n");
    scanf("%f", &nota1);

    printf("Digite a nota 2:\n");
    scanf("%f", &nota2);

    if (nota1 <= 10.0 && nota1 >= 0.0 && nota2 >= 0.0 && nota2 <= 10.0){
        media = (nota1 + nota2)/2;
        printf("A media foi: %.1f", media);
    }else {
        printf("Nota invalida.");
        return 1;
    }

    return 0;
}