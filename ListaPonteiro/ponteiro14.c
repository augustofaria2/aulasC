/*Escreva um programa que declare uma matriz 100 x 100 de inteiros. Vocˆe deve inicializar a matriz com zeros usando ponteiros para 
endere¸car seus elementos. Preencha depois a matriz com os n´umeros de 1 a 10000, tamb´em usando ponteiros.*/

#include <stdio.h>

int main() {
    int matriz[100][100];
    int i, j;
    int *ptr = &matriz[0][0];
    
    // Inicializando a matriz com zeros usando ponteiros
    for (i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++){
            *ptr = 0;
             ptr++;
        }
    }
    
    ptr = &matriz[0][0];

    int num = 1;

    for (i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++){
            *ptr = num;
            num++;
             ptr++;
        }
    }
    
    // Exemplo de impressão da matriz (apenas alguns elementos para visualização)
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}