/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fa¸ca uma
fun¸c˜ao que retorne a soma do dobro dos dois n´umeros lidos. A fun¸c˜ao dever´a armazenar o dobro de A na pr´opria vari´avel A 
e o dobro de B na pr´opria vari´avel B.*/

#include <stdio.h>

int somadobro(int *p_a, int *p_b){
    *p_a *= 2;
    *p_b *= 2;
    return *p_a + *p_b;
}

int main(){

    int a, b;
    int *p_a = &a, *p_b = &b;

    printf("Digite 2 inteiros: ");
    scanf("%d %d", p_a, p_b);

    int soma = somadobro(p_a, p_b);

    printf("Dobro de A: %d e dobro de B: %d e a soma: %d", *p_a, *p_b, soma);

    return 0;
}