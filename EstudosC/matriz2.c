#include <stdio.h>

int main(){

    int matriz[2][2];
    int linhas, colunas;

    for(linhas=0;linhas<2;linhas++){
        for(colunas=0;colunas<2;colunas++){
            printf("Digite o numero da posicao [%d] [%d]: ", linhas+1, colunas+1);
            scanf("%d", &matriz[linhas][colunas]);
        }
    } 

    printf("A matriz gerada foi:\n");

    for(linhas=0;linhas<2;linhas++){
        for(colunas=0;colunas<2;colunas++){
            printf("%d ", matriz[linhas][colunas]);
        }
        printf("\n");
    }


    return 0;
}