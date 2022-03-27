#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

double Pow(int n, int k)
{
	//n^k=n*n^(k-1);伪代码
	if ( k < 0 )
	{
		return (1.0 /  (Pow(n, -k)));
	}
	else if (k==0)
	{
		return 1;
	}
	else
	{
		return n * Pow(n, k - 1);
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}

//计算一个数，每一位数相加之和；
//1729  19	
//int DigiSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigiSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num % 10;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigiSum(num);
//	printf("%d\n", ret);
//
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////fun2
//// 利用递归来解决。
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen (arr + 1) >= 2 )
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}

//fun1
//利用循环来解决交换问题。
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	int tmp = 0;
//	while (left<right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//将数组中的字符逆序排列

//int main()
//{
//	char arr[] = "abcdef";
//	printf("交换前：%s\n", arr);
//	reverse_string(arr);
//	printf("交换后：%s\n", arr);
//	return 0;
//}

//void print_table(int n)
//{
//	int i = 1;
//	for ( i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
 
//void print(int* p, int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//		//p是一个指针，指针加整数还是一个地址
//		//再用* 进行解引用操作
//		//打印出这个地址所对应的数；
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//void print(int m)
//{
//	int i = 0;
//	printf("奇数位为：");
//	for  (i = 30; i >= 0; i -= 2)
//	{
//		int n = 0;
//		n = ((m >> i) & 1);
//		printf("%d ", n);
//	}
//	printf("\n");
//	printf("偶数位为：");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		int n = 0;
//		n = ((m >> i) & 1);
//		printf("%d ", n);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;	
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m,n);
//	printf("count = %d\n", count);
//	system("pause");
//	return 0;
//}