//#include <stdio.h>
//#include <string.h>
//
//void main() {
//	//不断输入姓名，直到输入 "exit" 为止[使用while完成]
//	//分析
//	//1. 需要接受用户的输入，字符串[字符数组]
//	//2. 提示： <string.h> 有一个strcmp 函数，判断两个字符串是否相同
//	// int strcmp(const char *str1, const char *str2) // 返回0 表示相等，非0表示不相等
//
//	char name[10] = "";
//	while(strcmp(name,"exit") != 0) { // exit  = > 0 != 0
//		printf("\n请输入名字");
//		scanf("%s", name); // 这里不需要 加 &name, 因为 数组的名称就是地址
//		printf("\n你输入的名字是=%s", name);
//	}
//
//	printf("退出while");
//
//	getchar(); //过滤 回车
//
//	getchar(); // 暂停控制台
//}
