//#include <stdio.h>
//
//void main() {
//	//从键盘读入个数不确定的整数，并判断读入的正数和负数的个数，
//	//输入为0时结束程序【使用for循环 ，break, continue完成】 【positive 正数，negative】
//
//	//分析
//	//1. 定义变量 positive 保存正数的个数
//	//2. 定义变量 negative 保存负数的个数
//	//3. 使用for + break + continue
//
//	int positive = 0;
//	int negative = 0;
//	int num = 0; //接收从控制台输入的数
//
//	for(;;) { // 是一个死循环
//		printf("请输入数");
//		scanf("%d", &num);
//		if(num == 0) {
//			break; //跳出for
//		}
//
//		if(num > 0 ) {//正数
//			positive++; //累计
//			continue;
//		}
//		//num 是一个负数
//		negative++;
//	}
//
//	printf("正数个数：%d 负数个数：%d", positive, negative);
//
//	getchar();
//
//	getchar();
//}
