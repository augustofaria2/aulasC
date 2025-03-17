/*Escreva um programa que declare um vetor de inteiros e um ponteiro para inteiros.
Associe o ponteiro ao vetor. Agora, some mais um (+1) a cada posi¸c˜ao do vetor
usando o ponteiro (use *).*/

#include <stdio.h>

int main(){

    int vet[10];
    int *p_vet = vet;

    printf("Digite 10 numeros: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", p_vet);
        p_vet++;
    }
    printf("\nVetor digitado foi: ");
    p_vet = vet;

    for(int i = 0; i < 10; i++){
        printf("%d ", *p_vet);
        p_vet++;
    }
    printf("\nVetor digitado com +1: ");
    p_vet = vet;

    for(int i = 0; i < 10; i++){
        printf("%d ", *p_vet+1);
        p_vet++;
    }

    return 0;
}