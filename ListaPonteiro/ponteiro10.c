/*Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritm´etica de ponteiros, leia esse array 
do teclado e imprima o dobro de cada valor lido.*/

#include <stdio.h>

int main(){

    int vect[5];
    int i;
    int *p_vect = vect;

    printf("Digite 5 inteiros: ");
    for(i = 0; i < 5; i++){
        scanf("%d", p_vect);
        *p_vect *= 2;
        p_vect++;
    }

    p_vect = vect; //reseta onde meu ponteiro aponta
   
    printf("Valores dobrados: ");
    for(i = 0; i < 5; i++){
        printf("%d\n", *p_vect);
        p_vect++;
    }

    return 0;
}