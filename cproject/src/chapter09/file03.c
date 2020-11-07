#include <stdio.h>

// 普通函数(非静态函数)
void fun1(void) {
    printf("hello from  fun1.\n");
}

// 静态函数, 它只能在本文件中使用
static void fun2(void) {
    printf("hello from  fun2.\n");
}
