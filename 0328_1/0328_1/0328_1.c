#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//vs环境下的调试技巧

//int	Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	printf("haha\n");
//	int i = 0;
//	int a = 10;
//	int b = 20;
// 	int c = Add(a, b);
//	return 0;
//}

//int main()
//{
//	{
//		int tmp = 0;
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}
// 
//void test2()
//{
//	printf("haha\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//		//ret = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("%p\n", arr);
	printf("%p\n", &i);

	system("pause");
	for ( i = 0; i <= 15; i++)
	{
		printf("哈哈\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
}