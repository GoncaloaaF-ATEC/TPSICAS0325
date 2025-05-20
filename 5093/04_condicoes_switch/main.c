#include <stdio.h>

int main(void) {

   int num = 3;
    switch (num) {
        case 1:
            printf("Hello World 1\n");
            break;
        case 2:
            printf("Hello World 2\n");
            break;
        case 3:
            printf("Hello World 3\n");
        case 4:
            printf("Hello World 4\n");
            break;
        case 5:
            printf("Hello World 5\n");
            break;
        default:
            printf("Opt invalida\n");

    }


    printf("depois do switch 1 \n");

    num = 2;
    switch (num) {
        case 1:
            printf("Hello World 1\n");
        case 2:
            printf("case 2\n");
            break;
        default:
            printf("Opt invalida\n");
    }

    int idade = 10;
    float peso = 30.5;

    if (idade > 10){

    }else if (peso != 30) {

    }



    return 0;
}