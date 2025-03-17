/*. Construa um vetor de n´umeros reais e percorra e mostre todo o vetor usando dois
ponteiros: um come¸cando do in´ıcio do vetor e outro do final.*/

#include <stdio.h>

int main(){


    float vect[5];
    float *p_final = &vect[4];
    float *p_inicio = vect;
    int i;

    printf("Digite 5 valores: ");

    for(i=0;i<5;i++){
        scanf("%f", p_inicio);
        p_inicio++;
    }

    p_inicio = vect;

    printf("INICIO: ");
    
    for(i=0;i<5;i++){
        printf("%.2f ", *p_inicio);
        p_inicio++;
    }

    printf("\nFINAL: ");

    for(i=5;i>0;i--){
        printf("%.2f ", *p_final);
        p_final--;
    }

    return 0;
}