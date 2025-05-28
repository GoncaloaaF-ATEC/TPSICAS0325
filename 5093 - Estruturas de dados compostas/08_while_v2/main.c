#include <stdio.h>

int main(void) {
    /*
    int num = 10;

    while (num > 0) {

        printf("%d\n", num);

        //num--;
        num -= 1;
    }

*/

    /*
     * recorrendo a um loop while calcule o fatorial de um num
     */

    int fact; // 120
    int num = 5;

    /*
     *
     * 5! = 5 * 4 * 3 * 2 * 1
     *
     */
    fact = num;
     // <=> num -= 1
    while (num > 1) {  //  5 * 4 * 3 * 2 * 1
        num--;
        fact = fact * num;
    }
    printf("Facial Number 1: %d\n", fact);

    num = 5;
    fact = num;
    num--; // <=> num -= 1
    while (num > 0) {  //  5 * 4 * 3 * 2 * 1
        fact = fact * num;
        num -= 1;
    }
    printf("Facial Number 2: %d\n", fact);

    fact = 1;
    num = 5;
    while (num > 0) {
        fact = fact * num;
        num -= 1;
    }
    printf("Facial Number 3: %d\n", fact);

    fact = 1;
    num = 5;
    while (num > 0) {
        fact = fact * num;
        num -= 1;
    }
    printf("Facial Number 4: %d\n", fact);




    return 0;
}