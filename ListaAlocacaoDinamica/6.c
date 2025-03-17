/*6. Fa¸ca um programa que pergunte ao usu´ario quantos valores ele deseja armazenar em
um vetor de double, depois aloque dinamicamente o espa¸co de mem´oria de acordo
com o especificado pelo usu´ario. Esse vetor deve ter um tamanho maior ou igual
a 10 elementos. Use este vetor dinˆamico como um vetor comum, atribuindo aos 10
primeiros elementos do vetor valores aleat´orios (usando a fun¸c˜ao rand) entre 0 e 100.
Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor.*/


#include <stdio.h>
#include <stdlib.h>

int main(){

    double *vetor;
    int N, i;
    
    printf("TAMANHO DO VETOR: ");
    scanf("%d", &N);

    if(N < 10){
        N = 10;
    }

    vetor = (double*)malloc(N*sizeof(double));

    for(i = 0; i < 10; i++){
        vetor[i] = (rand() % 101);
    }

    for(i = 0; i < 10; i++){
        printf("%.2f ", vetor[i]);
    }

    free(vetor);

    return 0;
}