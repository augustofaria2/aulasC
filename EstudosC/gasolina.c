#include <stdio.h>

// Um motorista deseja colocar no tanque do carro X reais de gasolina.
// Escreva um programa para ler o preço do litro da gasolina e o valor do
// pagamento, e exibir quantos litros ele conseguiu colocar no tanque. 

int main(){
    float valor;
    float reais;
    float total;

    printf("Qual o valor da gasolina atualmente?");
    scanf("%f", &valor);

    printf("Quanto reais voce quer colocar?");
    scanf("%f", &reais);

    total = reais/valor;
    
    printf("Da pra colocar %.2f litros de gasolina", total);

    return 0;
}