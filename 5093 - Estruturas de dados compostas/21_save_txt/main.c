#include <stdio.h>
/*
 *
 *  r - Leitura
 *  a - append
 *  w - escrita
 *
 */
#define LINHA 100

void save();
void read();
void readAll();
void read2();

int main(void) {

   // save();
    // read();

   // readAll();

    read2();

    return 0;
}

void read2() {
    char input[LINHA];

    FILE *myFile;
    myFile = fopen("../info4.txt", "r");

    fgets(input, LINHA, myFile); // le ate ->\n ou num char == LINHA
    printf("%s", input);

    fgets(input, LINHA, myFile);
    printf("%s", input);

    fgets(input, LINHA, myFile);
    printf("%s", input);

    fgets(input, LINHA, myFile);
    printf("%s", input);


    if (fgets(input, LINHA, myFile)) {
        printf("%s", input);
    }else {
        printf("o file ja foi todo lido");
    }

    fclose(myFile);

}
void readAll() {
    char input[LINHA];
    FILE *myFile;

    myFile = fopen("../info4.txt", "r");

    if (myFile == NULL) {
        printf("o file nao existe");
        return;
    }

    while (fgets(input, LINHA, myFile)) {
        printf("%s", input);
    }

    fclose(myFile);

}
void read() {
    char input[LINHA];

    FILE *myFile;
    myFile = fopen("../info4.txt", "r");

    fgets(input, LINHA, myFile); // le ate ->\n ou num char == LINHA
    printf("%s", input);

    fgets(input, LINHA, myFile);
    printf("%s", input);

    fgets(input, LINHA, myFile);
    printf("%s", input);

    fgets(input, LINHA, myFile);
    printf("%s", input);

    fgets(input, LINHA, myFile);
    printf("%s", input);

    fgets(input, LINHA, myFile);
    printf("%s", input);


    fclose(myFile);
}
void save() {
    FILE *myFile;

    myFile = fopen("../info4.txt", "a");

    fprintf(myFile, "Ola Mundo 2024\n");

    fclose(myFile);
}