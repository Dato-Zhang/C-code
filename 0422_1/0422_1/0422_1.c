#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
 
void left_move(char* arr, int k)
{
	assert(arr);//���ָ���Ƿ���Ч
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < k; i++)
	{
		//��תһ���ַ�
		char tmp = *arr;
		
		int j = 0;
		for ( j = 0; j < len-1 ; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = tmp;

	}
}
int main()
{
	char arr[] = "abcdef";
	left_move(arr, 2);
	printf("%s\n", arr);
	return 0;
}
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));//malloc ���ڴ�����ռ�
//	//ʹ�ÿռ�
//	//.....
//	//�ͷſռ�
//	free();
//	return 0;
//}
//
//int main()
//{
//	int a, b, c, d, e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}