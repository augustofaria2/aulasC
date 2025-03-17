//Faça um programa que leia um vetor com os dados de 10 carros: marca (máximo
//15 letras), ano e preço. Leia um valor (preço) e mostre as informações de todos os
//carros com preço menor que o valor lido. Repita este processo até que seja lido um
//valor = 0.

#include <stdio.h>

struct Carro{
    char marca[15];
    int ano;
    float preco;
};

int main(){

    struct Carro veiculo[3];
    float precocarro;
    int i;

    for (i = 0; i < 3; i++){
        printf("Digite o nome do carro %d:\n", i + 1);
        scanf("%s", veiculo[i].marca);

        printf("Digite o ano do carro %d:\n", i + 1);
        scanf("%d", &veiculo[i].ano);

        printf("Digite o preco do carro %d:\n", i + 1);
        scanf("%f", &veiculo[i].preco);
    }

    do{
        printf("Digite um valor:\n");
        scanf("%f", &precocarro);

        if(precocarro != 0){
            printf("Carros com valor menor que o digitado:\n");
            for(i = 0; i < 3; i++){
                if(veiculo[i].preco < precocarro){
                    printf("Marca: %s, Ano: %d, Preco: %.2f\n", veiculo[i].marca, veiculo[i].ano, veiculo[i].preco);
                }
            }
        }
    }while (precocarro != 0);

    return 0;
}