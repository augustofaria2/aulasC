/*(a) Escreva um programa que leia um número inteiro e informe se ele é positivo, negativo ou zero.

(b) Faça um programa que peça ao usuário três números e exiba qual deles é o maior.*/

#include <stdio.h>

int main(){

    int vetor[3], i, maior;

    printf("Digite os 3 numeros:\n");
    printf(" Numero 1: ");
    scanf("%d", &vetor[0]);

    maior = vetor[0];

    for(i=1;i<3;i++){
        printf(" Numero %d: ", i+1);
        scanf("%d", &vetor[i]);

        if(vetor[i]>maior){
            maior = vetor[i];
        }
    }

    printf("O maior numero foi: %d\n", maior);

    for(i=0;i<3;i++){
        if(vetor[i] > 0){
            printf("O numero da posicao %d eh positivo (%d).\n", i+1, vetor[i]);
        }else if(vetor[i] < 0){
            printf("O numero da posicao %d eh negativo (%d).\n", i+1, vetor[i]);
        }else{
            printf("O numero da posicao %d eh zero.\n", i+1);
        }
    }

    return 0; 
}