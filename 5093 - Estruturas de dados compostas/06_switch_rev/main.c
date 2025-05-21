#include <stdio.h>

int main(void) {

    int mes = 1;
/*
    if (mes == 1) {
        printf("Jan\n");
    }else if (mes == 2) {
        printf("Feb\n");
    }else if (mes == 3) {
        printf("Mar\n");
    }else {
        printf("Mes invalido\n");
    }
*/

    switch (mes) {

        case 1:
            printf("Jan\n");

        case 2:
            printf("Feb\n");
            break;

        case 3:
            printf("Mar\n");
            break;
        case 4:
            printf("Abr\n");
            break;

        default:
            printf("Mes invalido\n");
            break;
    }


    return 0;
}