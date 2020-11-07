#include  <stdio.h>
#include <string.h>

/**
 * 分析下面的代码输出什么
 */
void main() {
	int j, i;
	for(j = 0; j < 4; j++) {
		for(i = 0; i < 10; i++) {
			if(i == 2) {
				break;
			}
			printf("i = %d \n", i);
		}
	}

	getchar();
}
