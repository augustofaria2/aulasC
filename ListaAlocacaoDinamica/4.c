/*4. Escreva um programa que lˆe um vetor de inteiros (n´umero de elementos definido
pelo usu´ario), remove valores consecutivos repetidos e mostra o vetor atualizado. O
programa deve alocar mem´oria dinamicamente para utilizar o vetor, e o vetor deve ter
ao final da opera¸c˜ao sempre o tamanho exato dos elementos presentes nele. Permita
ao usu´ario informar mais conjuntos de n´umeros, e defina uma condi¸c˜ao para o usu´ario
parar a cria¸c˜ao de novos vetores. O programa deve, ao final de cada opera¸c˜ao, mostrar
o seu tamanho final.*/


#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, i, tam = 1, tamVetor = 1;
    int total;
    char continuar = 'n';
    int *vetor, *newVetor;

    do{
        if(continuar == 'n'){
            printf("TAMANHO DO VETOR: ");
            scanf("%d", &N);

            vetor = (int*)malloc(N*sizeof(int));

            printf("\nDIGITE OS ELEMENTOS\n");
            for(i = 0; i < N; i++){
                scanf("%d", &vetor[i]);
            }

            newVetor = (int*)malloc(N*sizeof(int));

            newVetor[0] = vetor[0];

            for(i = 1; i < N; i++){
                if(vetor[i] != vetor[i-1]){
                    newVetor[tam] = vetor[i];
                    tam++;
                    tamVetor++;
                }
            }

            newVetor = (int*)realloc(newVetor, tamVetor*sizeof(int));
        
            printf("\nNOVO VETOR...\n");

            for(i = 0; i < tamVetor; i++){
                printf("%d ", newVetor[i]);
            }

            free(vetor);
            
        }else{
            printf("QUANTOS NOVOS ELEMENTOS? ");
            scanf("%d", &N);

            total = tamVetor + N;

            vetor = (int*)realloc(newVetor, total*sizeof(int));

            newVetor = (int*)realloc(newVetor, total*sizeof(int));

            printf("\nDIGITE OS NOVOS ELEMENTOS...\n");
            for(i = tamVetor; i < total; i++){
                scanf("%d", &vetor[i]);
            }

            for(i = tamVetor; i < total; i++){
                if(newVetor[i] != newVetor[i-1]){
                    vetor[tam] = newVetor[i];
                    tam++;
                    tamVetor++;
                }
            }
            vetor = (int*)realloc(vetor, tamVetor*sizeof(int));
        
            printf("\nNOVO VETOR...\n");

            for(i = 0; i < tamVetor; i++){
                printf("%d ", vetor[i]);
            }

            free(newVetor);
        }

        getchar();
        printf("\nCONTINUAR? (Y/N) ");
        scanf("%c", &continuar);

    }while(continuar == 'y');

    printf("\nVETOR FINAL POSSUI %d ELEMENTOS.\n", tamVetor);

    free(vetor);

    printf("\nPROGRAMA FINALIZADO.\n");

    return 0;
}