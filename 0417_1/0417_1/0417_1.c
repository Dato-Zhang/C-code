#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//��ά����
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48 ��������Ĵ�С 3*4*4=48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//4*4
	printf("%d\n", sizeof(a[0] + 1));//4/8  ��һ�е�һ��Ԫ�ؼ�1  ���ǵ�һ�еڶ���Ԫ�صĵ�ַ 4
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	printf("%d\n", sizeof(a + 1));//4/8 ��һ��һά����ĵ�ַ��1�����ǵڶ���һά����ĵ�ַ
	printf("%d\n", sizeof(*(a + 1)));//16 
	printf("%d\n", sizeof(&a[0] + 1));//4/8   �ڶ��е�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));// 16  ����ڶ��д�С 
	printf("%d\n", sizeof(*a));//16 a����Ԫ�صĵ�ַ ���ǵ�һ�еĵ�ַ�������һ�еĵ�ַ
	printf("%d\n", sizeof(a[3]));//16 
	return 0;
}