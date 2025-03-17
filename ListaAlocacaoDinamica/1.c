/*1. Codifique um programa em C que:
(a) Aloque dinamicamente um vetor formado por N n´umeros inteiros, sendo N um
valor informado pelo usu´ario;
(b) Pe¸ca ao usu´ario para digitar os N n´umeros no espa¸co alocado;
(c) Imprima na tela os N n´umeros digitados;
(d) Libere a mem´oria alocada*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int N;
    int *vetor;

    printf("TAMANHO DO VETOR: ");
    scanf("%d", &N);

    vetor = (int*)malloc(N*sizeof(int));

    printf("DIGITE O VETOR ");
    for(int i = 0; i < N; i++){
        printf("#%d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("VETOR ");
    for(int i = 0; i < N; i++){
        printf("#%d: %d\n", i+1, vetor[i]);
    }

    free(vetor);

    return 0;
}