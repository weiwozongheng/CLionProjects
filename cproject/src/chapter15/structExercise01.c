#include <stdio.h>

// ����Dog�ṹ��
struct Dog {
    char *name;
    int age;
    double weight;
};

// say�����������ַ�������Ϣ�а������г�Աֵ
char *say(struct Dog dog) {
    // �������Ϣ���뵽һ���ַ���(�ַ�����)
    static char info[50]; //�ֲ���̬����
    sprintf(info, "name=%s age=%d weight=%.2f", dog.name, dog.age, dog.weight);
    dog.name = "С��";

    return info;
}

/**
 * ��дһ��Dog�ṹ�壬����name(char[10])��age(int)��weight(double)����
 * ��дһ��say�����������ַ�������Ϣ�а������г�Աֵ��
 * ��main�����У�����Dog�ṹ�����������say�����������ý����ӡ�����
 */
void main() {
    struct Dog dog;
    char *info = NULL;
    dog.name = "С��";
    dog.age = 1;
    dog.weight = 3.4;

    // �ṹ�����Ĭ����ֵ����
    info = say(dog);

    printf("\n С����Ϣ=%s", info);
    printf("\n main С������=%s", dog.name);

    getchar();
}
