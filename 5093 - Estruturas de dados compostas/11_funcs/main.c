#include <stdio.h>


// retorno nome(){}
// void não tem return
void olaMundo(void) {
    printf("ola Mundo\n");
}

// retorno nome(param){}
// param -> o que enviamos para dentro da func
void soma(int num1, int num2) {
    int sum = num1 + num2;
    printf("soma: %d\n", sum);
}

int soma2(int num1, int num2) {
    if (num1 < 1) {
        num1 = 1;
    }

    if (num2 < 1) {
        num2 = 1;
    }

    int sum = num1 + num2;
    return sum;
}


// (num1 + num2) * num3
int times(int num1, int num2, int num3) {

    if (num1 < 1) {
        num1 = 1;
    }

    if (num2 < 1) {
        num2 = 1;
    }

    int res = (num1 + num2) * num3;
    return res;
}

// (num1 + num2) * num3
int times2(int num1, int num2, int num3) {
    int res = soma2(num1, num2) * num3;
    return res;
}

// (num1 + num2) / num3
int div(int num1, int num2, int num3) {
    int res = (num1 + num2) / num3;
    return res;
}

// (num1 + num2) / num3
int div2(int num1, int num2, int num3) {
    int res = soma2(num1, num2) / num3;
    return res;
}

int main(void) {

    olaMundo();
    olaMundo();

    printf("Soma: \n");
    soma(3,1);
    soma(10,5);
    soma(-3,1);

    printf("Soma2: \n");

    // a = b

    int res1 = soma2(-8,-5);
    soma2(3,4);

    printf("res1: %d \n", res1);


    printf("times: \n");

    int res2 = times(5,5,2); // (5+5 ) * 2
    printf("res1: %d \n", res2);

    return 0;
}




