#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
 *  Faça um programa que crie um vetor de pessoas.
 *  Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct.
 *  O programa deve permitir que o usuário digite o nome de 3 pessoas e a seguir imprimi os dados de todas as pessoas.
 *  A struct deve armazenar os dados de idade, peso e altura.
 */

//Fiz tudo em string por ser mais fácil

typedef struct pessoa_registro {
    char idade[100];
    char peso[100];
    char altura[100];
    char nome[100];

} PESSOA;


int main(void) {
    FILE *arquivo;
    PESSOA pessoa[2];

    //Arquivo 1

    arquivo = fopen("Pessoa1.txt", "w");

    printf("Digite o nome da primeira pessoa:\n");
    scanf("\n%[^\n]", pessoa[0].nome);

    printf("Digite a idade da primeira pessoa:\n");
    scanf("\n%[^\n]", pessoa[0].idade);

    printf("Digite o peso da primeira pessoa:\n");
    scanf("\n%[^\n]", pessoa[0].peso);

    printf("Digite a altura da primeira pessoa:\n");
    scanf("\n%[^\n]", pessoa[0].altura);

    fprintf(arquivo, "%s\n", pessoa[0].nome);
    fprintf(arquivo, "%s\n", pessoa[0].idade);
    fprintf(arquivo, "%s\n", pessoa[0].peso);
    fprintf(arquivo, "%s\n", pessoa[0].altura);

    fclose(arquivo);

    // Arquivo 2

    arquivo = fopen("Pessoa2.txt", "w");

    printf("Digite o nome da segunda pessoa:\n");
    scanf("\n%[^\n]", pessoa[1].nome);

    printf("Digite a idade da segunda pessoa:\n");
    scanf("\n%[^\n]", pessoa[1].idade);

    printf("Digite o peso da segunda pessoa:\n");
    scanf("\n%[^\n]", pessoa[1].peso);

    printf("Digite a altura da segunda pessoa:\n");
    scanf("\n%[^\n]", pessoa[1].altura);

    fprintf(arquivo, "%s\n", pessoa[1].nome);
    fprintf(arquivo, "%s\n", pessoa[1].idade);
    fprintf(arquivo, "%s\n", pessoa[1].peso);
    fprintf(arquivo, "%s\n", pessoa[1].altura);

    fclose(arquivo);

    //Arquivo 3


    arquivo = fopen("Pessoa3.txt", "w");

    printf("Digite o nome da terceira pessoa:\n");
    scanf("\n%[^\n]", pessoa[2].nome);

    printf("Digite a idade da terceira pessoa:\n");
    scanf("\n%[^\n]", pessoa[2].idade);

    printf("Digite o peso da terceira pessoa:\n");
    scanf("\n%[^\n]", pessoa[2].peso);

    printf("Digite a altura da terceira pessoa:\n");
    scanf("\n%[^\n]", pessoa[2].altura);

    fprintf(arquivo, "%s\n", pessoa[2].nome);
    fprintf(arquivo, "%s\n", pessoa[2].idade);
    fprintf(arquivo, "%s\n", pessoa[2].peso);
    fprintf(arquivo, "%s\n", pessoa[2].altura);

    fclose(arquivo);


    return 0;
}

