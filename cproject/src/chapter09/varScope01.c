#include <stdio.h>

int n = 20; //�����ⲿ����ı���������ȫ�ֱ���
void sayHi() {
    char name[] = "tom"; //name ���Ǿֲ���������������sayHi������
    printf("hi %s \n", name);
}

//�����βΣ��ᱻ��Ϊf10�ľֲ�����
//˵�������ֲ�������ȫ�ֱ���ͬ��ʱ���Ծֲ�����Ϊ׼(�ͽ�ԭ��)
void f10(int n) {
    printf("\nn=%d", n);
}

void main() {
    int i = 0;

    //sayHi();

    //�������ǲ���ʹ�õ�sayHi��name����
    //printf("name= %s", name); //���ｫ��ʾ��û�ж���name

    f10(10);

    for (i = 0; i < 10; i++) {
        int k = 90; //k ����������for �������
        printf("i=%d k = %d\n", i, k);
    }
    // ���ﲻ��ʹ��for �ж����k ����
    // printf("k=%d", k);

    getchar();
}
