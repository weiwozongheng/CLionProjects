#include <stdio.h>

void main() {
    // p ��ָ��
    int *p = NULL;
    int num = 34;
    p = &num;

    printf("*p=%d", *p); // 34

    getchar();
}
