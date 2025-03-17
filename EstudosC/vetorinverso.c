/*(a) Crie um programa que leia 5 números inteiros e os armazene em um vetor. Depois, exiba os números na ordem inversa.*/

#include <stdio.h>

int main(){

    int vetor[5], i;

    printf("Digite 5 numeros inteiros: ");
    for(i=0;i<5;i++){
        scanf("%d", &vetor[i]);
    }

    for(i=4;i>=0;i--){
        printf("%d ", vetor[i]);
    }
    
    return 0;
}