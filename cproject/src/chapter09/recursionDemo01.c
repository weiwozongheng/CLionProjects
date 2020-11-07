#include <stdio.h>

void test(int n) {
    if(n > 2) {
        test(n -1);
    }
    printf("\nn=%d", n);
}

void test2(int n) {
    if (n > 2) {
        test(n - 1);
    } else {
        printf("\nn=%d", n);
    }
}

void main() {
    test(4); // Êä³ö?

    test2(4); // Êä³ö?

    getchar();
}
