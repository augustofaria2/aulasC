/*Crie um vetor de inteiros e preencha com valores aleat´orios suas posi¸c˜oes. Usando
aritm´etica de ponteiros para o percurso no vetor, fa¸ca:
(a) Encontrar o menor elemento do vetor.
(b) Calcular a m´edia entre os elementos.
(c) Encontrar o n´umero de elementos negativos.
(d) Imprimir os elementos em ordem invertida.
(e) Usar a fun¸c˜ao printf para retornar o n´umero de bytes alocados a cada posi¸c˜ao no
vetor. Como as posi¸c˜oes no vetor s˜ao cont´ınuas, a diferen¸ca entre dois endere¸cos
consecutivos permite descobrir o tamanho de cada posi¸c˜ao.*/

#include <stdio.h>

int main(){

    int vetor[5];
    int *p_vetor = vetor;
    int i, menor, soma = 0, negativos = 0;
    double media;

    printf("Digite 5 valores: ");
    scanf("%d", p_vetor);
    menor = *p_vetor;
    soma += *p_vetor;
    if(*p_vetor < 0){
        negativos++;
    }
    p_vetor++;

    for(i = 1;i < 5;i++){
        scanf("%d", p_vetor);
        soma += *p_vetor;
        if(*p_vetor < menor){
            menor = *p_vetor;
        }
        if(*p_vetor < 0){
            negativos++;
        }
        p_vetor++;
    }

    media = (double)soma/5;

    printf("Media: %.2f\nMenor: %d\nNegativos: %d\n", media, menor, negativos);

    p_vetor = &vetor[4];
    for(i = 5; i > 0; i--){
        printf("%d ", *p_vetor);
        p_vetor--;
    }
    
    int dif = (int)((char*)(&vetor[1]) - (char*)(&vetor[0]));
    printf("\nCada posição do vetor ocupa %d bytes\n", dif);

    return 0;
}