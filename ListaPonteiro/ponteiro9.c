/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endere¸co de cada posi¸c˜ao dessa matriz.*/

#include <stdio.h>

int main(){

    float matriz[3][3];
    float *p_matriz = &matriz[0][0];

    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%f", p_matriz);
            printf("ENDERECO %.2f: %p\n", *p_matriz, p_matriz);
            p_matriz++;
        }
    }

    p_matriz = &matriz[0][0];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%.2f ", *p_matriz);
            p_matriz++;
        }
        printf("\n");
    }

    return 0;
}