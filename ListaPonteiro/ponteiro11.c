/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse
array do teclado e imprima o endere¸co das posi¸c˜oes contendo valores pares.*/

#include <stdio.h>


int main(){

    int vetor[5];
    int *p_vetor = vetor;
    int i;

    printf("Digite 5 valores: ");
    for(i = 0; i < 5; i++){
        scanf("%d", p_vetor);
        p_vetor++;
    }

    for(i = 5;i>0;i--){
        if(*p_vetor % 2 == 0){
            printf("%d %p\n", *p_vetor, p_vetor);
        }
        p_vetor--;
    }

    return 0;
}