#include <stdio.h>

// ˵��
// 1.�������� test
// 2.����û�з��أ� void
// 3.��ɹ��� :����һ����+1
void test(int n) {
    int n2 = n + 1;
    printf("\nn2=%d", n2);
}

double getSum(int n1, int n2) {
    // int -> double(�Զ�ת��)
    return n1 + n2;
}

void main() {
    int num = 6;

    // double -> int
    double res = getSum(1, 9);

    test(num);

    printf("\nres=%.2f", res); // 10

    printf("\nokook~");

    getchar();
}
