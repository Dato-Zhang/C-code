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
		printf("��ѡ��->");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("����������������-->");
			scanf("%d%d", &x, &y);
			printf("%d\n", parr[input](x, y));

		}
		else if (input == 0)
		{
			printf("exit\n");
		}
		else
		{
			printf("�����������������\n");
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
//{	//����ָ�������
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
//{   //signal��һ����������
//	//signal�����Ĳ�������������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int ����������void
//	//signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//
//	void (*signal(int, void(*)(int)))(int);
//	//��
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//
//	typedef unsigned int uint;
//
//	return 0;
//}