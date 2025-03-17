#include <stdio.h>

int main(){

    int inteiro;
    int *p_inteiro = &inteiro;
    float real;
    float *p_real = &real;
    char caractere;
    char *p_caractere = &caractere;

    printf("Digite um inteiro, um real e um caractere: ");
    scanf("%d  %f  %c", p_inteiro, p_real, p_caractere);

    printf("Valores digitados: %d, %.2f, %c\n", *p_inteiro, *p_real, *p_caractere);

    *p_inteiro = 1;
    *p_real = 1.5;
    *p_caractere = 'a';

    printf("Novos valores: %d, %.2f, %c", *p_inteiro, *p_real, *p_caractere);

    return 0;
}