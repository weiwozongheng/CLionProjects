#include <stdio.h>

/**
 * ����һ��char���͵�26��Ԫ�ص����飬�ֱ� ����'A'-'Z����
 * ʹ��forѭ����������Ԫ�ز���ӡ��������ʾ���ַ��������� 'A'+1 -> 'B'
 */
void main() {
    char arr[26];
    int i;
    for (i = 0; i < 26; i++) {
        arr[i] = 'A' + i;
    }

    // ���
    for (i = 0; i < 26; i++) {
        printf("%c ", arr[i]);
    }

    getchar();
}
