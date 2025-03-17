/*(a) Escreva um programa que leia um número positivo n e exiba todos os números de 1 até n usando um for.

(b) Faça um programa que peça um número ao usuário e continue pedindo até que ele informe um número positivo (use while).*/

#include <stdio.h>

int main(){

    int n, i;

    while(n <= 0){
    printf("Digite um valor positivo para N: ");
    scanf("%d", &n);
    }

    if(n>0){
        printf("Numeros ate N: ");
        for(i=1;i <= n;i++){
            printf("%d ", i);
        }
    }

    return 0;
}