/*Fa¸ca um programa que leia dois valores inteiros e chame uma fun¸c˜ao que receba estes
2 valores de entrada e retorne o maior valor na primeira vari´avel e o menor valor na
segunda vari´avel. Escreva o conte´udo das 2 vari´aveis na tela.*/

#include <stdio.h>

void maiormenor(int *ptr_a, int *ptr_b){
    if(*ptr_b > *ptr_a){
        int maior = *ptr_b;
        *ptr_b = *ptr_a;
        *ptr_a = maior;
    }
}

int main(){

    int a, b;
    int *ptr_a = &a, *ptr_b = &b;

    printf("Digite 2 valores: ");
    scanf("%d %d", ptr_a, ptr_b);

    maiormenor(ptr_a, ptr_b);

    printf("O maior foi: %d e o menor foi: %d", a, b);

    return 0;
}