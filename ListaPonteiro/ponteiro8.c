/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima
o endere¸co de cada posi¸c˜ao desse array.
*/

#include <stdio.h>

int main(){

    float vect[10];
    float *p_vect = vect; //aponta para a primeira posição

    for(int i = 0; i < 10; i++){
        printf("%p\n", p_vect);
        p_vect++; //para pular o ponteiro pra proxima posição do array
    }

    printf("%.2f", *p_vect);

    
    return 0;
}