#include <stdio.h>
#include <stdlib.h>


/*
 *
 *
 *  1 ,2, 4 ,6, 1
 *
 */

void iter(int arr[], int size);

int main(void) {

    int nums[] = {1,2,3,4,5};

    printf("idx 0: %d\n",nums[0]);
    printf("idx 3: %d\n",nums[3]);
    printf("idx 3: %d\n",nums[4]);


    // printf("idx Erro: %d\n",nums[5]);
    // printf("idx Erro: %d\n",nums[99]);
    // printf("idx Erro: %d\n",nums[-98]);

    printf("--------\n");
    int size = sizeof(nums)/sizeof(nums[0]);
    printf("size: %d\n",size);

    printf("--------\n");
    int nums2[5];

    nums2[0] = 1;
    printf("idx2 0: %d\n",nums2[0]);

    printf("idx2 2: %d\n",nums2[2]);

    nums2[3] = 111;
    printf("idx2 3: %d\n",nums2[3]);

    nums2[4] = 1111;
    printf("idx2 4: %d\n",nums2[4]);

    printf("--------\n");

    int size2 = sizeof(nums2)/sizeof(nums2[0]);
    printf("size 2: %d\n",size2);


    printf("--------\n");

    nums2[5] = 25072025;
    printf("idx2 5: %d\n",nums2[5]);

    printf("--------\n");
    int size3 = sizeof(nums2)/sizeof(nums2[0]);
    printf("size 3: %d\n",size3);

    printf("--------\n");
    printf("--------\n");

    iter(nums2, size2);

    return 0;
}


void iter(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }


}