#include <stdio.h>



int main(void) {
    char sexo = 'M'; // letra

    // ----------------

    int idade = 10; // <- valor inteiro // max ->  0 - 2 147 483 647
                                        // min -> -2 147 483 648 - -1
    float altura = 1.5; // <- valor decimal -> 7cd
    double peso = 48.4; // <- valor decimal -> 12 a 14cd

    int valor1;
    int valor2;

    // %d -> placeholder para um  int
    printf("Digite um numero: ");
    scanf("%d", &valor1);

    printf("Digite um numero 2: ");
    scanf("%i", &valor2);

    printf("a valor inserido foi: %d e o valor2: %d \n", valor1, valor2);



    float valor3;
    printf("Digite um numero decimal1: ");
    scanf("%f", &valor3);

    float valor4;
    printf("Digite um numero decimal2: ");
    scanf("%f", &valor4);

    // %.2f -> o .2 diz qunatas casas deciamais o print vai mostrar
    printf("o valor decimal1 foi %.2f\n", valor3);
    printf("o valor decimal3 foi %.2f\n", valor4);

    float soma = valor3 + valor4;

    printf("A soma foi de %f \n", soma);

/*
 *
 *    o valor decimal1 foi 10.11
 *    o valor decimal3 foi 10.18
 *
 *    A soma foi de 20.295000
 */


    return 0;
}