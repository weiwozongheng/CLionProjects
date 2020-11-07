#include <stdio.h>

/**
 * 统计1——200之间能被5整除但不能被3整除的个数
 */
void main() {
	// 分析
	//1. 使用 do - while
	//2. 定义一个 count 保存满足条件的数的个数
	//3. 定义 i = 1  max=200 控制循环的次数
	int i = 1;
	int max = 200;
	int count = 0;
	do {
		// 判断
		if((i % 5 == 0) && (i % 3 != 0)) {
			count++; // 累积
		}
		i++;
	} while (i <= max); // 循环条件

	printf("1——200之间能被5整除但不能被3整除的个数 count= %d", count);

	getchar();
}
