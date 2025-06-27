#include <stdio.h> // input e output
#include <string.h> // strings

#define MAX_NOME 20

int main(void) {

    char nome[MAX_NOME] = "Gonçalo";

    printf("%s\n", nome);

    char nome2[MAX_NOME];
/*
    for (int i = 0; i < MAX_NOME; i++) {
        nome2[i] = nome[i];
    }
*/
    strcpy(nome2, nome);

    printf("nome2: %s\n", nome2);

    int nomeSize = strlen(nome);

    printf("nomeSize: %d\n", nomeSize);

    char txt1[MAX_NOME] = "abc";
    char txt2[MAX_NOME] = "abc";


    int comp = strcmp(txt1, txt2); // 0 -> são iguais, não 0 -> não são iguais
    printf("comp: %d\n", comp);

    return 0;
}
