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

	////使用
	//int* p2 = realloc(p, 80);
	//if (p2 != NULL)
	//{
	//	p = p2;
	//}


	//int* p2 = realloc(NULL, 40);//等价与malloc(40)


	//常见错误
	//1、对null指针解引用操作
	/*int* p = malloc(40);*/
	//*p = 10;//malloc 开辟空间失败，对null指针解引用
	//2、对动态开辟内存的越界访问
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

	//3、对动态开辟的内存使用free释放
	//int a = 10;//不是动态开辟出来的，不能用free
	//int* p = &a;

	//free(p);



	//4、使	用free释放动态内存的一部分
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
	//5、对同一块动态内存多次释放
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}


	////使用

	////释放
	//free(p);
	//p = NULL;
	//free(p);
	//

	//6、动态开辟内存忘记释放（内存泄漏）
	
	while (1)
	{
		malloc(1);//不释放，一直在消耗内存

	}



	return 0;
}