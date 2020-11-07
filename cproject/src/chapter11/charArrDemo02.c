#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {
    char greeting[] = "Hello";
    int i;
    int len = strlen(greeting); // len = 5

    printf("\ngreeting = %s", greeting);
    printf("\nlen = %d", len); // 5
    printf("\n字符串第3个字符是 = %c", greeting[2]); // l
    printf("\n");

    // 遍历
    for (i = 0; i < len; i++) {
        printf("%c ", greeting[i]); // H e l l o
    }

    system("pause");
}
