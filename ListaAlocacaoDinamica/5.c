/*Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimens˜oes definidas pelo usu´ario, e preencha a matriz com valores informados pelo
usu´ario. O programa deve ent˜ao construir um outro vetor que contenha exatamente os
n´umeros que aparecem na matriz. Por exemplo, caso a matriz seja [[1,3,5],[2,3,1],[1,1,6]],
o vetor resultante ser´a [1,3,5,2,6]. O vetor n˜ao precisa estar ordenado ao final da
execu¸c˜ao, e seu tamanho deve coincidir com o necess´ario para o resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int **matriz, *vetor;
    int M, N, TAM, tamVetor = 0;
    int i, j, k, existe = 0;

    printf("TAMANHO MATRIZ: ");
    scanf("%d %d", &M, &N);

    matriz = (int**)malloc(M*sizeof(int*));
    
    for(i = 0; i < M; i++){
        matriz[i] = (int*)malloc(N*sizeof(int));
    }

    printf("\nPREENCHA A MATRIZ...\n");

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    TAM = M * N;

    vetor = (int*)malloc(TAM*sizeof(int));
    
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            existe = 0;
            for(k = 0; k < TAM; k++){
                if(vetor[k] == matriz[i][j]){
                    existe = 1;
                    break;
                }
            }
            if(existe == 0){
                vetor[tamVetor] = matriz[i][j];
                tamVetor++;
            }
        }
    }

    printf("\nVETOR FINAL...\n");

    for(i = 0; i < tamVetor; i++){
        printf("%d ", vetor[i]);
    }

    free(vetor);

    for(i = 0; i < M; i++){
        free(matriz[i]);
    }
    
    free(matriz);

    return 0;
}