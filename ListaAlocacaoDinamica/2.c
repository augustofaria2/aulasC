/*2. Fa¸ca um programa em C que calcule a soma de duas matrizes M x N de n´umeros
reais (double).
(a) A implementa¸c˜ao deste programa deve considerar as dimens˜oes fornecida pelo
usu´ario (Dica: represente a matriz atrav´es de vari´aveis do tipo double **, usando
aloca¸c˜ao dinˆamica de mem´oria).
(b) N˜ao esque¸ca de criar uma fun¸c˜ao para liberar a ´area de mem´oria alocada pela
matriz.*/

#include <stdio.h>
#include <stdlib.h>

void liberar(int **matriz, int M){
    for(int i = 0; i < M; i++){
        free(matriz[i]);
    }

    free(matriz);
}

int main(){

    int **A, **B, **C;
    int M, N, i, j;

    printf("LINHAS X COLUNAS: ");
    scanf("%d %d", &M, &N);

    A = (int**)malloc(M*sizeof(int*));
    B = (int**)malloc(M*sizeof(int*));
    C = (int**)malloc(M*sizeof(int*));

    if(A == NULL || B == NULL || C == NULL){
        printf("FALHA NA ALOCACAO.");
        return 1;
    }

    for(i = 0; i < M; i++){
        A[i] = (int*)malloc(N*sizeof(int));
        B[i] = (int*)malloc(N*sizeof(int));
        C[i] = (int*)malloc(N*sizeof(int));

        if(A[i] == NULL || B[i] == NULL || C[i] == NULL){
            printf("FALHA NA ALOCACAO.");
            free(A);
            free(B);
            free(C);
            return 1;
        }
    }

    printf("GERANDO MATRIZ A...\n");

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            A[i][j] = (rand() % 11);
        }
    }

    printf("GERANDO MATRIZ B...\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            B[i][j] = (rand() % 11);
        }
    }

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            C[i][j] =  A[i][j] + B[i][j]; 
        }
    }

    printf("MATRIZ C FORMADA:\n");

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
           printf("[%d][%d]: %d ", i, j, C[i][j]); 
        }
        printf("\n");
    }

    liberar(A,M);
    liberar(B,M);
    liberar(C,M);

    return 0;
}