#include <stdio.h>

/**
 * ��ϰ
 */
void main() {
	// �������������������ӡ���xxСʱxx����xx��
	// int second = 894567;
	// int hour = second / 3600;
	// int minitue = second % 3600 / 60;
	// int leftSecond = second % 60;

	// printf("%d �� ��%dСʱ%d����%d��", second, hour, minitue, leftSecond);

	// getchar();

	// ʵ�ֶ������������򣬰��մ�С����˳�������ð������
	int temp = 0, n1 = 10, n2 = 8, n3 = 5;

	printf("��ʼ˳��n1=%d n2=%d n3=%d", n1, n2, n3);

	if (n1 > n2) {
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	printf("\n��1�δ����˳��n1=%d n2=%d n3=%d", n1, n2, n3);

	if (n2 > n3) {
		temp = n2;
		n2 = n3;
		n3 = temp;
	}
	printf("\n��2�δ����˳��n1=%d n2=%d n3=%d", n1, n2, n3);

	if (n1 > n2) {
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	printf("\n��3�δ����˳��n1=%d n2=%d n3=%d", n1, n2, n3);

	getchar();
}
