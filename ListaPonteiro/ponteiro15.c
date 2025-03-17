/*. Elabore um programa que receba duas strings de at´e 200 caracteres e verifique se a
segunda string ocorre dentro da primeira. Use aritm´etica de ponteiros para acessar
os caracteres das strings.*/


#include <stdio.h>

int main() {
    char a[200], b[200];
    char *p_a, *p_b, *p_temp;

    printf("Digite a primeira string (sem espaços): ");
    scanf("%s", a);

    printf("Digite a segunda string (sem espaços): ");
    scanf("%s", b);

    p_a = a;  // Inicializa o ponteiro para o início de `a`

    while (*p_a != '\0') {  
        p_temp = p_a;
        p_b = b; //ponteiro aponta para inicio de 'b'

        // Comparação entre `a` e `b`
        while (*p_b != '\0' && *p_temp == *p_b) {
            p_temp++;
            p_b++;
        }

        // Se chegamos ao final de `b`, então `b` ocorre dentro de `a`
        if (*p_b == '\0') {
            printf("A segunda string ocorre dentro da primeira.\n");
            return 0;
        }

        p_a++;  // Avança para o próximo caractere de `a`
    }

    printf("A segunda string NÃO ocorre dentro da primeira.\n");

    return 0;
}
