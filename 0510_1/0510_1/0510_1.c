#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}

	////ʹ��
	//int* p2 = realloc(p, 80);
	//if (p2 != NULL)
	//{
	//	p = p2;
	//}


	//int* p2 = realloc(NULL, 40);//�ȼ���malloc(40)


	//��������
	//1����nullָ������ò���
	/*int* p = malloc(40);*/
	//*p = 10;//malloc ���ٿռ�ʧ�ܣ���nullָ�������
	//2���Զ�̬�����ڴ��Խ�����
	/*int* p = (int*)malloc(40);
	if (p = NULL)
	{
		return 0;
	}
	int i = 0;
	for (i=0; i <= 10;  i++)
	{
		*(p = i) = i;
	}
	free(p);
	p = NULL;*/

	//3���Զ�̬���ٵ��ڴ�ʹ��free�ͷ�
	//int a = 10;//���Ƕ�̬���ٳ����ģ�������free
	//int* p = &a;

	//free(p);



	//4��ʹ	��free�ͷŶ�̬�ڴ��һ����
	/*int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 0;
	}
	int i = 0;
	for ( i = 0; i < 10; i++)
	{						 
		*p++ = i;
	}

	free(p);
	p = NULL;
	**/
	//5����ͬһ�鶯̬�ڴ����ͷ�
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}


	////ʹ��

	////�ͷ�
	//free(p);
	//p = NULL;
	//free(p);
	//

	//6����̬�����ڴ������ͷţ��ڴ�й©��
	
	while (1)
	{
		malloc(1);//���ͷţ�һֱ�������ڴ�

	}



	return 0;
}