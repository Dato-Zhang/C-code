#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//int g_i;//ȫ�ֱ���
//void test(int x)
//{
//	int i = 6;
//	g_i = 3;
//	g_i *= i + x;
//	//  3*(6+3)=27
//	printf("x = %d, i = %d, g_i = %d\n", x, i, g_i);
//	     // 3        6       27
//}
//int g_j = 2;//ȫ�ֱ���
//
//int main()
//{
//	int i = 3;
//	test(i);
//	g_i += i;// 27+3
//	printf("i = %d, g_i = %d, g_j = %d\n", i, g_i, g_j);
//			//3      30         2
//	return 0;
//}
//
//
//struct S
//{
//	int n;
//	int arr[];//δ֪��С������ ����Ϊ ���������Ա - ����Ĵ�С�ǿ��Ե�����
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//
//	ps->n = 100;
//	int i = 0;
//	for ( i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for ( i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//
//
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for ( i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for ( i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}

	for ( i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//�ͷ��ڴ�
	free(ps->arr);
	free(ps);
	return 0;

}