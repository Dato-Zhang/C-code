#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int main()
//{
//	//realloc������̬�����ڴ�ռ�Ĵ�С
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//ֻ����ʹ��malloc���ٵĿռ�
//	//�������20���ֽڲ����������ǵ�ʹ����
//	//ϣ����40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//
//	//reallocʹ�õ�ע������
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc��������һ���µ��ڴ�����
//	//  ����һ����������Ŀռ䣬���Ұ�ԭ���ɵ����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿�
//	//  �ٵ��ڴ�ռ��ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ
//
//	int* ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	//2.�Զ�̬���ٵ��ڴ��Խ�����
	//int* p = (int*)malloc(5 * sizeof(int));
	//if (p==NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		*(p + 1) = i;
	//	}

	//}
	//free(p);
	//p = NULL;
	//3.�ԷǶ�̬���ٵ��ڴ��free
	/*int a = 10;
	int* p = &a;
	*p = 20;
	free(p);
	p = NULL;*/


	return 0;
}