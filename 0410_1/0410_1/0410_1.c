#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	void (*p)(char*) = &Print;
	(*p)("hello world");
	return 0;
}

//函数指针 - 指向函数的指针	- 用来存放函数的地址
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//&函数名 和 函数名 都表示函数的地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//怎样存放函数的地址呢？
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}
//void test(int** p)
//{
//}
//
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);
//}
//void test1(int* p)
//{}
//
//void test2(char* pc)
//{}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	test1(&a);
//	test1(p);
//	char ch = 'a';
//	char* pc = &ch;
//	test2(&a);
//	test2(pc);
//	return 0;
//
//}
//void test(int arr[3][5])
//{
//}
//void test1(int arr[][5])
//{
//}
////void test2(int arr[3][]) //err 
////二维数组传参是只能省略行，不能省略列；
////void test3(int* arr)//err 这是一个整型指针 不是一个一维数组的地址
////{}
//
////void test4(int ** arr) //err
////{}
//
//void test5(int(*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	test1(arr);
//	//test3(arr);
//	//test4(arr);
//	test5(arr);
//	return 0;
//}
//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//指针数组 - - 存放指针的数组-本质是数组
//	int* arr[10] = { 0 };
//	//数组指针
//	int* p3;//整型指针 - 指向整型的指针、
//	char* p4;//字符指针 - 指向字符的指针
//	int arr2[5];
//	int(*pa)[5] = &arr2;
//	return 0;
//}

//int main()
//{
//    int X, N = 0;
//    scanf("%d %d", &X, &N);
//    int c = X + N;
//    if (c <= 7)
//    {
//        printf("%d", c);
//    }
//    else
//    {
//        c = c % 7;
//        if (c != 0)
//        {
//            printf("%d", c);
//        }
//        else
//            printf("7");
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    b = a % 100;
//    printf("%d", b / 10);
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d", a % 10);
//    return 0;
//}

//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//    printf("%d", 100 * x);
//    return 0;
//}
//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    int b, c = 0;
//    b = (int)a;
//    c = b % 10;
//
//    printf("%d", c);
//    return 0;
//}
//int main()
//{
//    int a, b = 0;
//    scanf("%d %d", & a, &b);
//    printf("%d", a % b);
//    return 0;
//}
//int main()
//{
//    int a, b = 0;
//    scanf("%x %o", &a, &b);
//    printf("%d\n", a + b);
//    return 0;
//}
//int main()
//{
//    int a, b, c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("%d%8d%8d", a, b, c);
//    //%nd表示右对齐
//    //%-nd表示左对齐
//    return 0;
//}
//int main()
//{
//    char a = 'a';
//    int b = 0;
//    float c = 0;
//    scanf("%c%d%f", &a, &b, &c);
//    printf("%c %d %f", a, b, c);
//    return 0;
//}
//void print1(int arr[3][5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("%d ", (*(arr + i))[j]);
//
//		}
//		printf("\n");
//	}
//
//}
//void print2(int(*pa)[5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(pa + i) + j));
//			//printf("%d ", (*(pa + i))[j]);
//			printf("%d ", pa[i][j]);
//			printf("%d ", *(pa[i] + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1, 2, 3, 4, 5},{2, 3, 4, 5, 6}, {3, 4, 5, 6, 7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr2;
//	for (int i = 0; i < 10; i++)
//	{
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr2 + i));
//		printf("%d ", arr2[i]);
//		//printf("%d ", p[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa1)[10] = &arr1;
//	int i = 0;
//	/*for ( i = 0; i < 10; i++)
//	{
//		printf("%p ", (*pa1)[i]);
//
//	}*/
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa1 + i));
//
//	}
//	char* arr2[10] = { 0 };
//	char* (*pa2)[10] = &arr2;
//
//	return 0;
//}