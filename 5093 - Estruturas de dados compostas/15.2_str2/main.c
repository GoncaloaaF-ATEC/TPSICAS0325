#include <stdio.h>

int main(void) {

    char nome[50];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Seu nome: %s", nome);

    return 0;
}