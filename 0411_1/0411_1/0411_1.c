#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*************************\n");
	printf("*** 1.Add     2.Sub *****\n");
	printf("****3.Mul     4.Div******\n");
	printf("******   0.exit   ********\n");
}
int main()
{
	int input = 0;
	int x, y = 0;
	int (*parr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数-->");
			scanf("%d%d", &x, &y);
			printf("%d\n", parr[input](x, y));

		}
		else if (input == 0)
		{
			printf("exit\n");
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	} while (input);
}
		//char* my_strcpy(char* dest, const char* src)
//{
//
//}
//int main()
//{
//char* (*pf)(char*, const char*) = my_strcpy;
//char* (*pfarr[4])(char*, const char*) = { my_strcpy };
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main() 
//{	//函数指针的数组
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add;
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", Add(2, 3));
//	return 0;
//}
//int main()
//{   //signal是一个函数声明
//	//signal函数的参数有两个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int 返回类型是void
//	//signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void
//
//	void (*signal(int, void(*)(int)))(int);
//	//简化
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//
//	typedef unsigned int uint;
//
//	return 0;
//}