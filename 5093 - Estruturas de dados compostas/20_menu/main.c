#include <stdio.h>
#include <stdlib.h>



int menu();


int main(void) {

    while (1) {
        int choice =  menu();

        //printf("a opção selecionda foi: %d", choice);

        switch (choice) {
            case 1:
                printf("opt 1\n");
                break;
            case 2:
                printf("opt 2\n");
                break;
            case 3:
                printf("opt 3\n");
                break;
            default:
                printf("opt invalida\n");
                break;
        }
        //system("pause"); <- win
        getchar();
        getchar();
        system("clear | cls");
    }

    return 0;
}


int menu() {
    int choice;

    printf("--------Menu--------\n");
    printf("| opt 1          1 |\n");
    printf("| opt 2          2 |\n");
    printf("| opt 2          3 |\n");
    printf("--------------------\n");
    printf("opeção: ");
    scanf("%d", &choice);
    fflush(stdin);

    return choice;


}