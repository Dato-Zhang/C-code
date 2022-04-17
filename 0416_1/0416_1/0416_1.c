#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5  p的地址+1 就是b的地址 从b开始 到\0
	//printf("%d\n", strlen(*p));//err  a 
	//printf("%d\n", strlen(p[0]));//err  a
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));

	//printf("%d\n", sizeof(p));//4/8
	//printf("%d\n", sizeof(p + 1));//4/8
	//printf("%d\n", sizeof(*p));//1  字符串的第一个字符
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8
	//char arr[] = "abcdef";

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//
	////printf("%d\n", strlen(*arr));//err strlen要传一个地址
	////printf("%d\n", strlen(arr[1]));//err 要传地址
	//printf("%d\n", strlen(&arr));//
	//printf("%d\n", strlen(&arr + 1));//
	//printf("%d\n", strlen(&arr[0] + 1));//


	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//8/4 首元素地址 +0还是首元素地址
	//printf("%d\n", sizeof(*arr));//1   首元素地址解引用 第一个元素的大小
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//8/4
	//printf("%d\n", sizeof(&arr + 1));//8/4
	//printf("%d\n", sizeof(&arr[0] + 1));//8/4
	return 0;
}

/*
int main()
{
	*///数组名是首元素地址 只有以下两种情况不是
	//1.sizeof(数组名)
	//2.&数组名         这两种情况数组名都表示整个数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16  sizeof(数组名)- 计算的是数组的总大小 单位是字节
	//printf("%d\n", sizeof(a + 0));// 4/8  a在这里是首元素地址，32位是4字节，64位是8字节
	//printf("%d\n", sizeof(*a));// 4首元素解引用，就是求首元素的大小 4个字节
	//printf("%d\n", sizeof(a + 1));// 4/8    a+1 是第二个元素的地址
	//printf("%d\n", sizeof(a[1]));//4 第二个元素 ， 就是第二个元素的大小
	//printf("%d\n", sizeof(&a));//取地址a，取出的也是a的地址，a的地址也是地址，地址就是4/8个字节
	//printf("%d\n", sizeof(*&a));//&数组名，再解引用， 相当于& 和 *抵消了 还是数组的总大小
	//printf("%d\n", sizeof(&a + 1));//&a+1虽然地址跳过整个数组的地址 但是还是一个地址
	//printf("%d\n", sizeof(&a[0]));
	//printf("%d\n", sizeof(&a[0] + 1));
	// 
	// 字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0));
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));

	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));//arr没有单独放在sizeof内部，也没有&，所以这里表示一个首元素地址
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));

//	return 0;
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//Swap(char* buf1, char* buf2,int width)
//{
//	int i = 0;
//	for ( i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//				//void* 是无类型指针 可以接受任意类型的指针或地址
//									//width 每个元素的字节
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	//躺数
//	for ( i = 0; i < sz; i++)
//	{
//		//每一趟要比较的对数
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				
//			}
//		}
//	}
//}
//void test4()
//{
//
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	printf("交换前\n");
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	printf("\n");
//	printf("交换后\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test5()
//{
//	struct Stu
//	{
//		char name[10];
//		int age;
//	};
//	struct Stu s[3] = {{"zhangsan",20}, {"lisi",30},{"wangwu",10}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	//冒泡排序
//	bubble_sort(s, sz, sizeof(s[0]), cmp_int);
//}
//int main()
//{
//	test4();
//	return 0;
//}