#include <stdio.h>

const int MAX = 3;
int main() {
    int var[] = {10, 100, 200};
    int i, *ptr[3];
    for (i = 0; i < MAX; i++) {
        /* ��ֵΪ�����ĵ�ַ */
        ptr[i] = &var[i];
    }
    // ָ����������ȡ����ֵ
    for (i = 0; i < MAX; i++) {
        printf("Value of var[%d] = %d ptr[%d]����ĵ�ַ=%p \n ", i, *ptr[i], i, &ptr[i]); // 10, 100, 200

    }
    getchar();

    return 0;
}
