/*Fa¸ca um programa que leia n´umeros do teclado e os armazene em um vetor alocado
dinamicamente. O usu´ario digitar´a uma sequˆencia de n´umeros, sem limite de quantidade. Os n´umeros ser˜ao digitados um a um e, se o usu´ario digitar o n´umero 0 (ZERO),
o programa termina. Antes de terminar, imprima todos os valores armazenados no
vetor. Os dados devem ser armazenados na mem´oria deste modo:
• Inicie com um vetor de tamanho 5 alocado dinamicamente;
• Caso o vetor alocado esteja cheio, aloque um novo vetor do tamanho do vetor
anterior adicionado espa¸co para mais 5 valores (tamanho N+5, onde N inicia
com 5);*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, i, tam = 0;
    int *vetor;
    char continuar = 'n';

    do{
        if(continuar == 'n'){
            N = 5;

            vetor = (int*)malloc(N*sizeof(int));

            printf("\nDIGITE OS ELEMENTOS...\n");

            for(i = 0; i < N; i++){
                scanf("%d", &vetor[i]);
                tam++;
                if(vetor[i] == 0){
                    vetor = (int*)realloc(vetor, tam*sizeof(int));
                    if(i != 0){
                        printf("\nVETOR FINAL...\n");
                    }
                    for(i = 0; i < tam-1; i++){
                        printf("%d ", vetor[i]);
                    }
                    free(vetor);
                    return 0;
                }
            }
        }else{
            N += 5;

            vetor = (int*)realloc(vetor, N*sizeof(int));

            printf("\nDIGITE OS NOVOS ELEMENTOS...\n");

            for(i = tam; i < N; i++){
                scanf("%d", &vetor[i]);
                tam++;
                if(vetor[i] == 0){
                    vetor = (int*)realloc(vetor, tam*sizeof(int));
                    if(i != 0){
                        printf("\nVETOR FINAL...\n");
                    }
                    for(i = 0; i < tam-1; i++){
                        printf("%d ", vetor[i]);
                    }
                    free(vetor);
                    return 0;
                }
            }
        }
        
        getchar();
        printf("CONTINUAR? (y/n) ");
        scanf("%c", &continuar);

    }while(continuar == 'y');

    printf("\nVETOR FINAL...\n");

    for(i = 0; i < tam; i++){
        printf("%d ||", vetor[i]);
    }

    free(vetor);

    printf("\nPROGRAMA FINALIZADO...\n");

    return 0;
}