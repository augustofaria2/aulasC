//Faça um programa que leia dois vetores com 10 posições. Crie um terceiro vetor com
//10 posições contendo, nas posições pares os valores do primeiro vetor e nas posições
//ímpares os valores do segundo vetor.

#include <stdio.h>

int main(){

    int vetor1[10];
    int vetor2[10];
    int vetor3[10];
    int i;

    printf("Digite os 10 numeros do primeiro vetor:\n");

    for (i = 0; i < 10; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os 10 numeros do segundo vetor:\n");

    for (i = 0; i < 10; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for(i = 0; i < 10; i++){
        if(i % 2 == 0){
            vetor3[i] = vetor1[i];
        } else {
            vetor3[i] = vetor2[i];
        }
    }

    printf("Seu vetor novo eh:\n");

    for(i = 0; i < 10; i++){
        printf("%d ", vetor3[i]);
    }

    return 0; 
}
