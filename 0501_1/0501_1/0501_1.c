#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����Ĭ�϶�����Ϊ4
#pragma pack(4)
#include<stddef.h>

struct S3
{
	double d;
	char c;
	int i;
};
//ȡ�����õ�Ĭ�϶�����
#pragma pack()

int main()
{
	printf("%d\n", sizeof(struct S3));
	//offsetof����ƫ����
	printf("%d\n",offsetof(struct S3, c));
	return 0;
}