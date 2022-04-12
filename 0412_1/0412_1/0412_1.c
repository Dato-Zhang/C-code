#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 6
//冒泡排序
int main()
{
	int arr[N] = { 0 };
	for (int i = 0; i < N; i++)
	{
		printf("请输入一个数\n");
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < N-1; j++)//
	{
		for (int k = 0; k < N - j - 1; k++)
		{
			if (arr[k] > arr[k + 1])
			{
				int t = 0;
				t = arr[k + 1];
				arr[k + 1] = arr[k];
				arr[k] = t;
			}
		}
	}
	for (int n = 0; n < N; n++)
	{
		printf("%d ", arr[n]);
	}
	return 0;
}


//void print(char* str)
//{
//	printf("hello %s", str);
//}
//
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("world");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}