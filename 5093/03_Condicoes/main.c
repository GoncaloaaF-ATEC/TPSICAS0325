#include <stdio.h>


int main(void) {
    // linha 1
    // linha 2

    //linha 3.1 ou linha 3.2


    // linha n







/*
 *
 * >
 * <
 * >=
 * <=
 * ==
 * !=
 * ! - negação
 *
 */
    int num1 = 50;
    int num2 = 20;


    if ( num1 > num2) {
        printf("Bloco do if\n");
        // printf("%d is greater than %d", num1, num2);
    }else {

        printf("Bloco do else");

    }


    printf("o num é %d\n", num1);

    // faça um programas qu e receba 2 nume diga qual é o maior


    // receber 2 num
    //    cirar as var para os num

    int valor1;
    int valor2;

    //    ler os num

    printf("valor 1:");
    scanf("%d", &valor1);

    printf("valor 2:");
    scanf("%d", &valor2);


    //    ver qual o maior

    if (valor1 > valor2) {
        printf("o maior é valor1 -> %d\n", valor1);

    }else if (valor1 < valor2) {
        printf("o maior é valor2 -> %d\n", valor2);

    }else {
        printf("Os valores são iguais\n");
    }

    printf("Depois do if \n");



    return 0;
}