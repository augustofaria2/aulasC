/*(a) Escreva um programa que leia o nome de um usuário, sua idade e sua altura. Depois, exiba essas informações formatadas na tela.*/

#include <stdio.h>

struct Usuario{
    char nome[20];
    int idade;
    float altura;
};

int main(){

    struct Usuario pessoa;

    printf("Digite suas informações:\n");

    printf("Seu nome de usuário: ");
    scanf("%s", pessoa.nome);
    printf("Sua idade: ");
    scanf("%d", &pessoa.idade);
    printf("Sua altura: ");
    scanf("%f", &pessoa.altura);

    printf("Muito prazer %s, voce tem %d anos de idade e %.2f metros de altura.", pessoa.nome, pessoa.idade, pessoa.altura);

    return 0;
}