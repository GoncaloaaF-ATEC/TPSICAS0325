#include <stdio.h>
#include <string.h>


#define MAX_ALUNOS 10
#define MAX_NOME 50

typedef struct aluno {
    char nome[MAX_NOME];
    int idade;
} Aluno;


int main(void) {

    Aluno alunos[MAX_ALUNOS];

    stpcpy(alunos[0].nome, "Gonçalo");
    alunos[0].idade = 10;

    printf("alunos[0]: %s\n", alunos[0].nome);
    printf("alunos[0]: %d\n", alunos[0].idade);


    printf("nome 1: ");
    fgets(alunos[1].nome, MAX_NOME, stdin);

    printf("strcspn: %d\n", strcspn(alunos[1].nome, "\n"));

    alunos[1].nome[strcspn(alunos[1].nome, "\n")] = '\0';

    printf("idade 1: ");
    scanf("%d", &alunos[1].idade);


    printf("alunos[1]: %s\n", alunos[1].nome);
    printf("alunos[1]: %d", alunos[1].idade);
    
    return 0;
}