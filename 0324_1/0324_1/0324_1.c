#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//fun3 最优解
 
int count_bit_one(int a)
{
	int count = 0;
	while (a)
	{
		a = a & (a - 1);
		count++;
	}
	return count;
}
//fun2利用 & 按位与 来判断

//int count_bit_one(int a) 
//{
//	int count = 0;
//	int i = 0;
//	for ( i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//fun1

//int count_bit_one(unsigned int a)
//{
//	//模2-看是否是1 除2-去除掉已经判断过的
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}

int main()
{
	int a = 0;
	scanf("%d", &a);
	//写一个函数 求a的二进制（补码）表示中有几个1；
	int count = count_bit_one(a);
	printf("count = %d\n", count);
	system("pause");
	return 0;
}


//int i;
//int main()
//{
//	i--;
//	//-1
//	//源码：10000000000000000000000000000001
//	// 符号位不变，其他位取反
//	//反码：11111111111111111111111111111110
//	// 反码加一就是补码
//	//补码：11111111111111111111111111111111
//	if (i > sizeof(i))//sizeof计算变量/类型所占内存的大小，一定都是>=0的，所以c语言规定sizeof计算出来的都是无符号数
//		//无符号数与有符号数比较大小时，有符号数要先转化为无符号数，再去比较
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
// 
// 
//交换两个数组的值
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 0,2,4,6,8,};
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	//交换数
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz	);//将数组初始化为0
//	print(arr,sz);
//	Reverse(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}

//int main()
//{
//	
//}
////数组越界导致野指针问题
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for ( i = 0; i < 12; i++)
//	{
//		*p++ = i;
//	}
//	//*p = 20;
//	//printf("%p \n", *p);
//	return 0;
//}