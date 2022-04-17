#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//二维数组
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48 整个数组的大小 3*4*4=48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//4*4
	printf("%d\n", sizeof(a[0] + 1));//4/8  第一行第一个元素加1  就是第一行第二个元素的地址 4
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	printf("%d\n", sizeof(a + 1));//4/8 第一行一维数组的地址加1，就是第二行一维数组的地址
	printf("%d\n", sizeof(*(a + 1)));//16 
	printf("%d\n", sizeof(&a[0] + 1));//4/8   第二行地址
	printf("%d\n", sizeof(*(&a[0] + 1)));// 16  计算第二行大小 
	printf("%d\n", sizeof(*a));//16 a是首元素的地址 就是第一行的地址，计算第一行的地址
	printf("%d\n", sizeof(a[3]));//16 
	return 0;
}