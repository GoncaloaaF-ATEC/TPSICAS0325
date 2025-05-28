#include <stdio.h>


int main(void) {
    const int r = 10;

    printf("\nwhile \n");
    int x = 10;
    while (x > 0) {
        printf("%d ", x);
        x--;
    }


    int i = 231;
    printf("\nFor \n");

    for (int i = 10; i > 0 ;i-- ) {
        printf("%d ", i);
    }

    printf("\n");

    printf("%d \n", i);

    //bloco 0;
/*
    int v = 10;
    printf("v 0: %d ", v);
    if (1) {
        //bloco 1 - inicio
        printf("v 1: %d ", v);

        int v = 15;
        if (1) {
            //bloco 2 - inicio
            printf("v 2: %d ", v);
            int v = 20;
            if (1) {
                //bloco 3 - inicio
                printf("v 3: %d ", v);
                int v = 25;

                printf("\n");
                printf("v 3: %d ", v);
                //bloco 3 - fim
            }

            printf("v 2: %d ", v);
            //bloco 2 - fim
        }
        printf("v 1: %d ", v);
        //bloco 1 - fim
    }

printf("v 0: %d", v);

*/


    int f = 10;

    if (1) {
        printf("f: %d ", f);

        f = 12;
        printf("f: %d ", f);

        int f = 20;
        printf("f: %d ", f);
    }
    printf("f: %d ", f);

    return 0;
}
