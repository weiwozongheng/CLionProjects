#include <stdio.h>

/*ĳ����100,000Ԫ,ÿ����һ��·�ڣ���Ҫ����,��������:
���ֽ�>50000ʱ,ÿ�ν�5%
���ֽ�<=50000ʱ,ÿ�ν�1000
��̼�����˿��Ծ������ٴ�·��,ʹ�� while break��ʽ���

����
1. money ���� ��� 
2. ������� count ͳ�ƿ��Ծ������ٸ�·��
3.  while break
4. break ������ money < 1000ʱ
*/
void main() {
	int count = 0; //·����
	int money = 100000; //���е�Ǯ
	while(1) { //��ѭ��
		//�ж��Ƿ���˳�
		if(money < 1000) { //�˳�while����
			break;
		}

		//���ֽ�>50000ʱ,ÿ�ν�5%
		if(money > 50000) {
			money = money * 0.95;
		} else if(money <= 50000) {
			money -= 1000;
		}
		count++; //������·������1
	}
	printf("100,000Ԫ ���Ծ��� %d ��·�� ʣ�� %d Ԫ", count, money);

	getchar();
}
