//Faça um programa que receba do usuário uma string. O programa deve imprimir a string sem suas vogais.

#include <stdio.h>

int main(){

    char string[100];
    int i;
    int j = 0;

    printf("Digite sua string:\n");
    scanf("%s", string);

    for(i = 0; string[i] != '\0'; i++){
        if(string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' &&
            string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U') {
            
            string[j] = string[i];
            j++;
        }
    }
    string[j] = '\0';

    printf("Sua string sem vogais eh: %s", string);
    
    return 0;
}