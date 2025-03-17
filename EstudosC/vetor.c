//Faça um programa que leia um vetor com cinquenta posições para números inteiros e mostre somente os números positivos.

#include <stdio.h>

int main(){
    int i;
    int vetor[3];

    printf("Digite 3 numeros inteiros\n");

    for(i = 0; i < 3; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Numeros positivos\n");

    for(i = 0; i < 3; i++){
        if(vetor[i] > 0){
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}