#include  <stdio.h>
#include <string.h>

/**
 * ��������Ĵ������ʲô
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
