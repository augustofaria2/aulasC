//Faça um programa que leia quatro notas, calcule a média aritmética e imprima o
//resultado.

#include <stdio.h>

int main(){

    int i;
    float vetor[4];
    float media;
    
    printf("Digite 4 notas:\n");

    for(i = 0; i < 4; i++){ 
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    media = (vetor[0] + vetor[1] + vetor[2] + vetor[3])/4;

    printf("A media foi: %.2f", media);

    return 0;
}
