#include <stdio.h>
#include <string.h>

void main() {
	// 打印1—100之间所有能被3整除的数
	int i = 1;
	int max = 100;
	while(i <= max) {
		if(i % 3 == 0) {
			printf("\n i=%d 能被3整除", i);
		}
		i++;
	}

	getchar();
}
