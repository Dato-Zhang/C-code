#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	//ö�����͵Ķ���
//	enum Day
//	{
//		Mon,
//		Tues,
//		Wed,
//		Thur,
//		Fri,
//		Sat,
//		Sum
//	};
//	enum Sex
//	{
//		//ö�ٵĿ���ȡֵ 
//		//ö�ٳ���
//			Male=2,
//			Female=4,
//			Secret=8
//	};
//
//	enum Sex s = Male;
//	printf("%d %d %d\n", Male, Female, Secret);
//	return 0;	
//}

//���� - ������ - ������
//union un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}
//�жϵ�ǰ�����Ĵ�С�˴洢
//
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}

union Un
{
	int a; //4 8 4
	char arr[5];// 1 8 1  4  5  8

};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}