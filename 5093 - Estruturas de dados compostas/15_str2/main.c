#include <stdio.h>

int main(void) {


    char nome[50];
    char aplido[50];

    printf("nome: ");
    scanf("%s",nome);
    fflush(stdin);

    printf("aplido: ");
    scanf("%s",aplido);
    fflush(stdin);

    printf("o nome é: %s %s", nome, aplido);





    return 0;
}