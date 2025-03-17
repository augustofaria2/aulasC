/*Crie um programa que contenha uma fun¸c˜ao que permita passar por parˆametro dois
n´umeros inteiros A e B. A fun¸c˜ao dever´a calcular a soma entre estes dois n´umeros
e armazenar o resultado na vari´avel A. Esta fun¸c˜ao n˜ao dever´a possuir retorno, mas
dever´a modificar o valor do primeiro parˆametro. Imprima os valores de A e B na
fun¸c˜ao principal.
*/

#include <stdio.h>

void somaTrocaA(int *p_a, int *p_b){
    *p_a = *p_a + *p_b;
}

int main(){

    int a, b;
    int *p_a = &a, *p_b = &b;

    printf("Digite 2 valores inteiros: ");
    scanf("%d %d", p_a, p_b);

    somaTrocaA(p_a, p_b);

    printf("a (soma): %d b: %d", *p_a, *p_b);

    return 0;
}