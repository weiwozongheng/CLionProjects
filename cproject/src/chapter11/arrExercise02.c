#include <stdio.h>

/**
 * �����һ����������ֵ�����õ���Ӧ���±�
 * ����
 * 1. �������� ��С 5
 * 2. �ٶ� max = arr[0] �������ֵ��Ȼ���������κ��������������бȽϣ�������ֱ� �б�max������������Ӧ�ı仯(�Ѹ��������� max)�������Ǳ������������飬max ���������
 */
void main() {
    int arr[] = {0, -1, 89, 99, 4, 0, 23, 876, 9876, 3, 4, 6};
    int arrLen = sizeof(arr) / sizeof(int);
    int max = arr[0];
    int maxIndex = 0;
    int i;
    for (i = 1; i < arrLen; i++) {
        // ������ֱ� �б�max������������Ӧ�ı仯(�Ѹ��������� max)
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
    printf("max=%d maxIndex=%d", max, maxIndex);

    getchar();
}
