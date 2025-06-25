#include <stdio.h>

#define col 3
#define row 5

int main(void) {

    int mtx[row][col] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("%d\n", mtx[0][0]); // mtx[l][c]

    printf("%d\n", mtx[0][1]);

    printf("---------\n");
    int size = sizeof(mtx) / sizeof(mtx[0]);
    printf("size: %d\n", size);


    //mtx[3] = {33,11,66};

    mtx[3][0] = 33;
    mtx[3][1] = 11;
    mtx[3][2] = 55;

    return 0;
}