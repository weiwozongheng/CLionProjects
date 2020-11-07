#include <stdio.h>

// data 就是一个共用体(内存布局)， 包含三个成员, 共享数据空间, 该空间的大小以占用最大的成员为准
union data {
    int n;
    char ch;
    short m;
};

/**
 * 共用体
 */
void main() {
    union data a; // 定义两个一个共用体变量a
    printf("%d, %d\n", sizeof(a), sizeof(union data)); // 4, 4
    a.n = 0x40; // 16进制
    printf("%d, %c, %d\n", a.n, a.ch, a.m);
    a.ch = '9';
    printf("%d, %c, %d\n", a.n, a.ch, a.m);
    a.m = 0x2059;
    printf("%d, %c, %d\n", a.n, a.ch, a.m);
    a.n = 0x3E25AD54;
    printf("%d, %c, %d\n", a.n, a.ch, a.m);

    getchar();
}
