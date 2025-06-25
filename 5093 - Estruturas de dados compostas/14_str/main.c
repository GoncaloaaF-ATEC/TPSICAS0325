#include <stdio.h>


/*
 *
 * %d ou %i - int
 * %f float
 * %c para um char
 * %s - para um array de chars (String)
 *
 * \' -> '
 * \" -> "
 * \\ -> \
 *
 *
 */

void iter(char arr[], int size);

int main(void) {
    char nome[] = "Goncalo";
    char escola[4] = "ATEC";


    printf("%s da escola %s\n", nome, escola);

    printf("1 letra do nome: %c\n", nome[0]);

    nome[0] = 'B';

    printf("%s da escola %s\n", nome, escola);

    printf("---------------\n");

    int size = (sizeof(nome)/sizeof(char)) - 1;


    printf("%d\n",size);

    printf("---------------\n");

    iter(nome, size);

    printf("---------------\n");
    printf("---------------\n");


    printf("\"%s\" da escola %s\n", nome, escola);
    return 0;
}

void iter(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c\n", arr[i]);
    }
}