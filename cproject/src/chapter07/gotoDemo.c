#include <stdio.h>

void main() {
    printf("start\n");

    // lable1 ³ÆÎª±êÇ©
    goto lable1;

    printf("ok1\n");
    printf("ok2\n");

    lable1:

    printf("ok3\n");
    printf("ok4\n");

    getchar();
}
