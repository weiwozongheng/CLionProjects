#include <stdio.h>

/**
 * 创建一个char类型的26个元素的数组，分别 放置'A'-'Z‘。
 * 使用for循环访问所有元素并打印出来。提示：字符数据运算 'A'+1 -> 'B'
 */
void main() {
    char arr[26];
    int i;
    for (i = 0; i < 26; i++) {
        arr[i] = 'A' + i;
    }

    // 输出
    for (i = 0; i < 26; i++) {
        printf("%c ", arr[i]);
    }

    getchar();
}
