//#include <stdio.h>
//#include <string.h>
//
//void main() {
//	//ʵ�ֵ�¼��֤�������λ��ᣬ����û���Ϊ�����޼ɡ� ,���롱888����ʾ��¼�ɹ���
//	//������ʾ���м��λ��ᣬ��ʹ��for ѭ�����
//
//	//����
//	//1. ����Ҫ����һ�������������¼�Ļ���(����) chance
//	//2. ���������ַ����飬���� �û���������
//	//3. ʹ��forѭ��+break , �����¼�ɹ�������ǰ�˳�
//	int chance = 3;
//	int loginCount = chance; // ֵ����
//	char name[10] = "";
//	char pwd[10] = "";
//	int i; // ѭ������
//	for(i = 1; i <= loginCount; i++) {
//		printf("\n���������֣�\n");
//
//		scanf("%s", name);// �ַ����飬��Ҫ��&
//
//		printf("\n���������룺\n");
//
//		scanf("%s", pwd);
//
//		// �ж��ַ�����ͬʹ��strcmp
//		if(strcmp("���޼�", name) == 0 && strcmp("888", pwd) == 0){
//			printf("\n��¼�ɹ�");
//			break; // for + break
//		} else {
//			// �����������
//			chance--;
//			printf("\n�㻹��%d�ε�¼����", chance);
//		}
//	}
//
//	getchar();
//
//	getchar();
//}
