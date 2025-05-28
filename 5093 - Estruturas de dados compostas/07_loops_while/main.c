#include <stdio.h>

int main(void) {


    int i = 1;
    int tab = 2;

    while (i <= 10) {
        int res = i * tab;
        printf("%d x %d = %d\n", tab, i, res);
        i++; // i = i + 1 ou i += 1
    }

    printf("Fim do while");

    return 0;
}