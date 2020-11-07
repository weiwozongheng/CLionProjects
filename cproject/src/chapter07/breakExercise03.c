//#include <stdio.h>
//#include <string.h>
//
//void main() {
//	//实现登录验证，有三次机会，如果用户名为”张无忌” ,密码”888”提示登录成功，
//	//否则提示还有几次机会，请使用for 循环完成
//
//	//分析
//	//1. 首先要定义一个变量，保存登录的机会(次数) chance
//	//2. 定义两个字符数组，接收 用户名和密码
//	//3. 使用for循环+break , 如果登录成功，就提前退出
//	int chance = 3;
//	int loginCount = chance; // 值传递
//	char name[10] = "";
//	char pwd[10] = "";
//	int i; // 循环变量
//	for(i = 1; i <= loginCount; i++) {
//		printf("\n请输入名字：\n");
//
//		scanf("%s", name);// 字符数组，不要加&
//
//		printf("\n请输入密码：\n");
//
//		scanf("%s", pwd);
//
//		// 判断字符串相同使用strcmp
//		if(strcmp("张无忌", name) == 0 && strcmp("888", pwd) == 0){
//			printf("\n登录成功");
//			break; // for + break
//		} else {
//			// 机会次数减少
//			chance--;
//			printf("\n你还有%d次登录机会", chance);
//		}
//	}
//
//	getchar();
//
//	getchar();
//}
