#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	unsigned int i;
	for ( i = 9; i >= 0; i--)//��ѭ��
	{
		printf("%u\n", i);
	}
	return 0;
}
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	//����ֽ���
//	//�����ݵĵ�λ�ֽ�������ݴ���ڸߵ�ַ������λ�ֽ�������ݴ���ڵ͵�ַ��
//	//С���ֽ���
//	//�����ݵĵ�λ�ֽ�������ݴ���ڵ͵�ַ������λ�ֽ�������ݴ���ڸߵ�ַ��
//
//	//�жϵ�ǰ�������ֽ���
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	printf("%d\n", *p);
//	return 0;
//}