#include <stdio.h>

const int MAX = 3;
int main() {
    int var[] = {10, 100, 200};
    int i, *ptr[3];
    for (i = 0; i < MAX; i++) {
        /* 赋值为整数的地址 */
        ptr[i] = &var[i];
    }
    // 指针数组来获取各个值
    for (i = 0; i < MAX; i++) {
        printf("Value of var[%d] = %d ptr[%d]本身的地址=%p \n ", i, *ptr[i], i, &ptr[i]); // 10, 100, 200

    }
    getchar();

    return 0;
}
