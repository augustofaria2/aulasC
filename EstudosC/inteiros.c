/*(a) Desenvolva um programa que peça ao usuário três números inteiros e calcule a média aritmética deles.

(b) Faça um programa que leia um número inteiro e verifique se ele é par ou ímpar, utilizando o operador módulo (%).*/

#include <stdio.h>

int main(){

    int vetor[3], i;
    float media;

    printf("Digite os numeros inteiros.\n");

    for(i=0;i<3;i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    media = (vetor[0] + vetor[1] + vetor[2])/3;
    printf("A media foi: %.2f\n", media);

    for(i=0;i<3;i++){
        if(vetor[i] % 2 == 0){
            printf("O numero %d eh par.\n", vetor[i]);
        }else{
            printf("O numero %d eh impar.\n", vetor[i]);
        }
    }

    return 0;
}