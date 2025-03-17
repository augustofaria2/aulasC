//Escreva um programa que solicita 6 números ao usuário, através de
//um laço, e ao final mostre qual destes números é o maior.

#include <stdio.h>

int main(){

    int laco [6];
    int i, maior;

    printf("Digite os 6 numeros inteiros:\n");

    printf("Numero 1: ");
    scanf("%d", &laco[0]);
    maior = laco[0];

    for(i = 1; i < 6; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &laco[i]);
        if(laco[i] > maior){   
            maior = laco[i];
        }  
    }

    printf("O maior numero foi: %d", maior);

    return 0;
}