/*(b) Faça um programa que leia uma matriz 3x3 de números inteiros e exiba a soma de todos os seus elementos.*/

#include <stdio.h>

int main(){

    int matriz[3][3];
    int soma = 0;
    int linhas, colunas;

    for(linhas=0;linhas<3;linhas++){
        for(colunas=0;colunas<3;colunas++){
            printf("Digite o numero da posicao [%d] [%d]: ", linhas+1, colunas+1);
            scanf("%d", &matriz[linhas][colunas]);
            soma += matriz[linhas][colunas];
        }
    }

    printf("Soma dos elementos: %d", soma);

    return 0;
}