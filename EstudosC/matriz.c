#include <stdio.h>

int main(){

    int linhas, colunas, i, j;
    int matriz[linhas][colunas];

    printf("Digite o número de linhas e de colunas da matriz: ");
    scanf("%d %d", &linhas, &colunas);

    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("Digite o numero da posição [%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
    }

    return 0;
} /*errado pq n pode declarar matriz assim*/