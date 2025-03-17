/*Escreva um programa que contenha duas vari´aveis inteiras. Leia essas vari´aveis do
teclado. Em seguida, compare seus endere¸cos e exiba o conte´udo do maior endere¸co.
*/

#include <stdio.h>

int main(){

    int a, b;
    int *ptr_a = &a, *ptr_b = &b;

    printf("Digite dois valores.\n");
    scanf("%d %d", ptr_a, ptr_b);

    if(ptr_a > ptr_b){
        printf("O maior endereço: %p, possui o valor: %d. endereço de b = %p", ptr_a, a, ptr_b);
    }else{
        printf("O maior endereço: %p, possui o valor: %d. endereço de a = %p", ptr_b, b, ptr_a);
    }

    return 0;
}