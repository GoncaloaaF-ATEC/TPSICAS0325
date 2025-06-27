/*
 * Autores:Gonçalo Feliciano
 *
 */


#include <stdio.h>
#include <string.h>

int main(void) {

    char nome[] = "Gonçalo Feliciano";

    printf("strlen(nome) %lu\n", strlen(nome));

    char aux[] = "abc";
    printf("strcmp(aux, \"abc\"): %d ", strcmp(aux, "abc"));
    printf("strcmp(aux, \"abc\"): %d ", strcmp(aux, "arb"));

    return 0;
}