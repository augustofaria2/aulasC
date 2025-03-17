/*(c) Desenvolva um sistema que simule um menu de um caixa eletrônico. O usuário deve digitar uma opção:
1️⃣ Sacar
2️⃣ Depositar
3️⃣ Consultar saldo
4️⃣ Sair*/

#include <stdio.h>

int main(){

    int opcao;
    printf("Bem vindo ao caixa, digite uma opcao:\n");
    printf("1-Sacar\n2-Depositar\n3-Consultar saldo\n4-Sair\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Opcao Sacar.");
            break;
        case 2:
            printf("Opcao Depositar.");
            break;
        case 3:
            printf("Opcao Consultar saldo.");
            break;
        case 4:
            printf("Opcao Sair.");
            break;
        default:
            printf("Opcao invalida.");
    }

    return 0;
}