#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//设置默认对齐数为4
#pragma pack(4)
#include<stddef.h>

struct S3
{
	double d;
	char c;
	int i;
};
//取消设置的默认对齐数
#pragma pack()

int main()
{
	printf("%d\n", sizeof(struct S3));
	//offsetof计算偏移量
	printf("%d\n",offsetof(struct S3, c));
	return 0;
}