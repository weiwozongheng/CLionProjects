#include <stdio.h>

void main() {
    // c��һ��һά�ַ����飬������Ԫ�ظ�ֵ
    char c[7] = {'t', 'o', 'm'};

    char str[4] = {'a', 'b', 'c', '\0'};
    // �������ϵͳҲ�����Զ���� '\0'
    char str2[] = {'j', 'a', 'c', 'k'};

    // ��� c , ϵͳ����������
    // 1. �ӵ�һ���ַ���ʼ�����ֱ������ \0 , ��ʾ���ַ�������
    printf("\nc=%s", c);

    printf("\nstr=%s", str); // abc?

    printf("\nstr2=%s", str2); // jack����

    getchar();
}
