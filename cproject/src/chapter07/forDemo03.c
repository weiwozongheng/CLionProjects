#include <stdio.h>

void main() {
	// 循环初始值可以有多条初始化语句，但要求类型一样，并且中间用逗号隔开，
	// 循环变量迭代也可以有多条变量迭代语句，中间用逗号隔开

	// 分析输出
	// i = 0 j = 0
	// i = 1 j = 2
	// i = 2 j = 4
	// i = 3 j = 6
	int i;
	int j;
	for (i = 0, j = 0; i <= 3; i++, j += 2) {
		printf("\ni=%d j=%d", i, j);
	}

	printf("\n最后 i=%d j=%d", i, j); // i = 4 j =8

	getchar();
}
