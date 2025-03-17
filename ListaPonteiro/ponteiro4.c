/*Fa¸ca um programa que leia 2 valores inteiros e chame uma fun¸c˜ao que receba estas
2 vari´aveis e troque o seu conte´udo, ou seja, esta fun¸c˜ao ´e chamada passando duas
vari´aveis A e B por exemplo e, ap´os a execu¸c˜ao da fun¸c˜ao, A conter´a o valor de B e
B ter´a o valor de A.*/

#include <stdio.h>

void trocarValores(int *ptr_a, int *ptr_b){
    int troca = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = troca;
}

int main(){

    int a, b;
    int *ptr_a = &a, *ptr_b = &b;

    printf("Digite 2 valores inteiros: ");
    scanf("%d %d", ptr_a, ptr_b);

    trocarValores(ptr_a, ptr_b);

    printf("Novos valores: %d %d", a, b);


    return 0;
}