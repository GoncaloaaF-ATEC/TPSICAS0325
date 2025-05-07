#include <stdio.h>
// cmt 1 linha

/*
 * cmt
 * com
 * mais
 * de
 * uma
 * linha
 *
 */

/*
 *
 * \n -> quebra de linha -> muda de lina
 * \t -> tab
 * \ -> escape char -> o que depois e txt -> tirando o \n e \t
 *      \" -> "
 */
int main(void) {

    printf("Ola Mundo 1!\nOla Mundo 1.1\n");
    printf("Ola Mundo 2!\n");

    printf("txt1\ttxt2\ttxt3\n");
    printf("um  \tdois\ttres\n");

    printf("o \"aluno\" tem 10");

    return 0;
}