#include <stdio.h>
#include <string.h>

void main() {
	// ��ӡ1��100֮�������ܱ�3��������
	int i = 1;
	int max = 100;
	while(i <= max) {
		if(i % 3 == 0) {
			printf("\n i=%d �ܱ�3����", i);
		}
		i++;
	}

	getchar();
}
