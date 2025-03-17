/*(c) Peça ao usuário um tamanho N para um vetor e, em seguida, preencha o vetor com valores digitados pelo usuário. Depois, exiba apenas os números pares armazenados.*/

#include <stdio.h>

int main(){

    int n = 0; 
    int vetor[n], i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    printf("Agora digite os numeros do vetor.\n");

    for(i=0;i<n;i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Numeros pares sao: ");

    for(i=0;i<n;i++){
        if(vetor[i] % 2 == 0){
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}