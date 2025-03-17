/*(b) Desenvolva um programa que armazene os dados de 2 produtos em um vetor de struct. Cada produto deve conter nome, 
código e preço. Depois, peça um código ao usuário e exiba os dados do produto correspondente.*/

#include <stdio.h>
#include <string.h>

struct Produto{
    char nome[10];
    int codigo;
    float preco;
};

int main(){

    struct Produto vendinha[2];
    int codigo, i;

    strcpy (vendinha[0].nome, "Augusto");
    vendinha[0].codigo = 123;
    vendinha[0].preco = 12.50;

    strcpy(vendinha[1].nome, "Guto");
    vendinha[1].codigo = 321;
    vendinha[1].preco = 15.50;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    for(i=0;i<2;i++){
        if(codigo == vendinha[i].codigo){
            printf("Nome: %s | ",vendinha[i].nome);
            printf("Codigo: %d | ",vendinha[i].codigo);
            printf("Valor: %.2f",vendinha[i].preco);
         }
    }

    return 0;
}