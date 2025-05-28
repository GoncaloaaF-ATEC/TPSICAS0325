#include <stdio.h>

int main(void) {

    /*
     * recorrendo a um loop for cire uma app que calcule uma tabuada
     *
     * exp:
     * num = 5
     *
     * output:
     *
     *  1 x 5  = 5
     *  2 x 5  = 10
     *  3 x 5  = 15
     *  4 x 5  = 20
     *  5 x 5  = 25
     *  6 x 5  = 30
     *  7 x 5  = 35
     *  8 x 5  = 40
     *  9 x 5  = 45
     *  10 x 5 = 50
     */


    int num = 5;

    for (int i = 1; i <= 10; i++ ) {
        int aux = i * num;

        printf("%d x %d = %d\n", i, num, aux);

    }


    // cal um factorial  com for

    int num2 = 5; // 120

    int fact = 1;
    int i;
    for (i = 1; i <= num2 ; i++) {

        fact *= i; // fact = fact * i
    }

    printf("fact = %d\n", fact);
    printf("i = %d\n", i);


    int x = 10;

    x = x + 5;
    printf("%d\n", x);

    x += 5;
    printf("%d\n", x);




    x = x - 5;
    printf("%d\n", x);

    x -= 5;
    printf("%d\n", x);


    x = x * 2;
    printf("%d\n", x);

    x *= 2;
    printf("%d\n", x);




    return 0;
}