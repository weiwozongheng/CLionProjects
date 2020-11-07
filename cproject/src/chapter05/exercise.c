#include <stdio.h>

/**
 * 练习
 */
void main() {
	// 定义变量保存秒数，打印输出xx小时xx分钟xx秒
	// int second = 894567;
	// int hour = second / 3600;
	// int minitue = second % 3600 / 60;
	// int leftSecond = second % 60;

	// printf("%d 秒 合%d小时%d分钟%d秒", second, hour, minitue, leftSecond);

	// getchar();

	// 实现对三个整数排序，按照从小到大顺序输出（冒泡排序）
	int temp = 0, n1 = 10, n2 = 8, n3 = 5;

	printf("初始顺序：n1=%d n2=%d n3=%d", n1, n2, n3);

	if (n1 > n2) {
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	printf("\n第1次处理后顺序：n1=%d n2=%d n3=%d", n1, n2, n3);

	if (n2 > n3) {
		temp = n2;
		n2 = n3;
		n3 = temp;
	}
	printf("\n第2次处理后顺序：n1=%d n2=%d n3=%d", n1, n2, n3);

	if (n1 > n2) {
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	printf("\n第3次处理后顺序：n1=%d n2=%d n3=%d", n1, n2, n3);

	getchar();
}
