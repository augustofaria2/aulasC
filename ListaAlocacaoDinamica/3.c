/*3. Fa¸ca um programa em C que contenha uma ou mais estruturas para representar
os dados de um funcion´ario de uma empresa. O tipo Funcion´ario deve possuir os
seguintes campos:
• Nome do funcion´ario
• Data de nascimento
• Endere¸co completo
• Sal´ario
O programa deve alocar dinamicamente um vetor de N posi¸c˜oes, sendo cada posi¸c˜ao
ocupada por um funcion´ario da empresa. Lembrando que N deve ser um n´umero
fornecido pelo usu´ario do programa. Em seguida, preencha os dados do funcion´ario
e imprima os nomes dos funcion´arios que possuem o maior sal´ario.*/

typedef struct DataNascimento{

    int dia;
    int mes;
    int ano;

}DATA;

typedef struct Endereco{

    char rua[50];
    char bairro[50];
    int numero;
    char cidade[50];
    char estado[50];
    char pais[50];
    char CEP[50];

}ENDERECO;

typedef struct Funcionario{

    char nome[50];
    double salario;
    DATA data;
    ENDERECO endereco;

}FUNCIONARIO;

#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, i;
    FUNCIONARIO *func;
    double maior;

    printf("QUANTOS FUNCIONARIOS? ");
    scanf("%d", &N);
    
    func = (FUNCIONARIO*)malloc(N*sizeof(FUNCIONARIO));

    for(i = 0; i < N; i++){
        printf("FUNCIONARIO #%d:\n", i+1);

        printf("NOME: ");
        scanf(" %s", func[i].nome);

        getchar();

        printf("SALARIO: ");
        scanf("%lf", &func[i].salario);

        printf("DATA DE NASCIMENTO (DD MM AAAA): ");
        scanf("%d %d %d", &func[i].data.dia, &func[i].data.mes, &func[i].data.ano);

        getchar();
        
        printf("RUA: ");
        scanf(" %s", func[i].endereco.rua);

        printf("BAIRRO: ");
        scanf(" %s", func[i].endereco.bairro);

        getchar();

        printf("NUMERO DA MORADIA: ");
        scanf("%d", &func[i].endereco.numero);

        getchar();

        printf("CIDADE: ");
        scanf(" %s", func[i].endereco.cidade);

        printf("ESTADO: ");
        scanf(" %s", func[i].endereco.estado);

        printf("PAIS: ");
        scanf(" %s", func[i].endereco.pais);

        printf("CEP: ");
        scanf(" %s", func[i].endereco.CEP);

        getchar();
    }

    printf("SALARIO MAIOR QUE: ");
    scanf("%lf", &maior);

    for(i = 0; i < N; i++){
        if(func[i].salario > maior){
            printf("FUNCIONARIO #%d: %s com %.2f.", i+1, func[i].nome, func[i].salario);
        }
    }

    free(func);

    return 0;
}