#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	unsigned int i;
	for ( i = 9; i >= 0; i--)//死循环
	{
		printf("%u\n", i);
	}
	return 0;
}
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	//大端字节序
//	//把数据的低位字节序的内容存放在高地址处，高位字节序的内容存放在低地址处
//	//小端字节序
//	//把数据的低位字节序的内容存放在低地址处，高位字节序的内容存放在高地址处
//
//	//判断当前机器的字节序
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	printf("%d\n", *p);
//	return 0;
//}