#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float a = 9.0;
	printf("%d\n", a);
	return 0;
}
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5, };
//	int b[] = { 2, 3, 4, 5, 6 };	//printf("%d %d %d\n", arr[0],arr[1],arr[2]);
//	int c[] = { 3, 4, 5, 6, 7 };
//	int* arr[3] = {a, b, c};
//	for (int  i = 0; i < 3; i++)
//	{
//		for (int  j = 0; j < 5; j++)
//		{
//
//			printf("%d  ", *(arr[i]) + j);
//		}
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	char* str3 = "hello world";
//	char* str4 = "hello world";
//
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//
//	if (str3 == str4)
//	{
//		printf("str3 and str4 are same\n ");
//	}
//	else
//	{
//		printf("str3 and str4 are not same\n");
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 's';
//	char* pch = &ch;
//	//本质上是把字符串的首字符的地址存储在了pstr中
//
//	char* pstr = "hello world";
//	char arr[] = "hello world";
//
//	printf("%s\n", pstr);
//	printf("%s\n", arr);
//	return 0;
//}