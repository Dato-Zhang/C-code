#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int main()
//{
//	//realloc调整动态开辟内存空间的大小
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
//	//只是在使用malloc开辟的空间
//	//假设这里，20个字节不能满足我们的使用了
//	//希望有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//
//	//realloc使用的注意事项
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc会重新找一个新的内存区域
//	//  开辟一块满足需求的空间，并且把原来旧的数据拷贝回来，释放旧的内存空间，最后返回新开
//	//  辟的内存空间地址
//	//3.得用一个新的变量来接收realloc函数的返回值
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
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	//2.对动态开辟的内存的越界访问
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
	//3.对非动态开辟的内存的free
	/*int a = 10;
	int* p = &a;
	*p = 20;
	free(p);
	p = NULL;*/


	return 0;
}