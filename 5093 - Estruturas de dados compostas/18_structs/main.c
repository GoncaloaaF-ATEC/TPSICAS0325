#include <stdio.h>
#include <string.h>


typedef int inteiro;


typedef struct morada {
    char rua[50];
    int numero;
} Morada;


typedef struct aluno {
    char nome[50];
    int idade;
    double notas[10];
    Morada morada;
} Aluno;


int main(void) {
    Aluno aluno1 = {"Gonçalo", 20, {12,12,1,12,1}};

    printf("Aluno 1: %s\n", aluno1.nome);
    printf("Aluno 1: %d\n", aluno1.idade);
    printf("Aluno 1: %.2f\n", aluno1.notas[0]);

    inteiro idade = 10;
    printf("%d\n", idade);


    Aluno aluno2;

    strcpy(aluno2.nome, "Carlos");
    aluno2.idade = 99;
    aluno2.notas[0] = 1.5;
    aluno2.notas[1] = 2.5;


    printf("Aluno 2: %s\n", aluno2.nome);
    printf("Aluno 2: %d\n", aluno2.idade);
    printf("Aluno 2: %.3f\n", aluno2.notas[0]);

    printf("------\n");

    Aluno aluno3 = {.nome = "Rui", .idade = 20, .notas = {11,12,13,14,15}};
    printf("Aluno 3: %s\n", aluno3.nome);
    printf("Aluno 3: %d\n", aluno3.idade);
    printf("Aluno 3: %.3f\n", aluno3.notas[0]);


    printf("------\n");

    Aluno aluno4 = {.nome = "Rui", .idade = 20};
    printf("Aluno 4: %s\n", aluno4.nome);
    printf("Aluno 4: %d\n", aluno4.idade);
    printf("Aluno 4: %.3f\n", aluno4.notas[0]);



    printf("------\n");

    Aluno aluno5 = {.idade = 20, .notas = {11,12,13,14,15}, .nome = "Luis"};
    printf("Aluno 5: %s\n", aluno5.nome);
    printf("Aluno 5: %d\n", aluno5.idade);
    printf("Aluno 5: %.3f\n", aluno5.notas[0]);

    strcpy(aluno5.morada.rua, "Rua XPTO");
    printf("Aluno 5: %s\n", aluno5.morada.rua);


    printf("------\n");
    printf("------\n");
    printf("------\n");

    Morada morada1 = {"rua ABC", 12};

    Aluno aluno6 = {.nome = "Rui", .idade = 20};
    aluno6.morada = morada1;

    printf("Aluno 6 Rua : %s\n", aluno6.morada.rua);
    printf("Aluno 6 num : %d\n", aluno6.morada.numero);

    printf("------\n");
    Aluno aluno7 = {.nome = "Rui", .idade = 20};

    aluno7.morada = morada1;
    printf("Aluno 7 Rua : %s\n", aluno7.morada.rua);
    printf("Aluno 7 num : %d\n", aluno7.morada.numero);


    aluno7.morada.numero = 99;
    strcpy(aluno7.morada.rua, "Rua 1");

    printf("Aluno 7 Rua : %s\n", aluno7.morada.rua);
    printf("Aluno 7 num : %d\n", aluno7.morada.numero);

    printf("------\n");
    printf("Aluno 6 Rua : %s\n", aluno6.morada.rua);
    printf("Aluno 6 num : %d\n", aluno6.morada.numero);


    return 0;

}