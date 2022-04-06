#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int M, N;//输入两个数 M到N
	int i;//第一个for循环的循环变量，先将M赋给i，用for循环来输出从M到N的数
	int count = 0;//计数器，用来统计素数的个数
	int j;//第二个for循环中的循环变量
	scanf("%d %d", &M, &N);
	//第一个for循环，输出从M到N的数
	for ( i = M; i <= N; i++)
	{
		int prime = 1;//注意prime要在这里定义，不能在第二个for里面定义
					  //判断一个数是否是素数，只需要用一次prime；
		//第二个for循环，求素数
		//看i能否被从2 到 i-1 中的数整除
		//如果能被整除，则不是素数，不需要再去求下面的数了，所以直接用break跳出第二个for循环
		//如果是素数，则计数器+1；
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)//如果等于0，说明能整除，不是素数
			{
				prime = 0;
				break;
			}
			//  else
			//	count++;注意，这里是错误的 因为如果第一个数整除不等于0
			//直接跟else的话，后面还有一些数没有去除，可能后面有的数能整除
		}
		if (prime)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}

#include<stdio.h>

int countdigit(int x)//函数计算2的个数
{
	int a = 0;//定义一个临时的变量来存放2
	int count = 0;//计数器

	while (x != 0)
	{
		a = x % 10;//取个位上的数字
		x = x / 10;//去除已经取到的个位，将原来个位前面的移到个位上
		if (a == 2)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n = 0;//输入的数
	int i = 0;//循环次数
	int sum = 0;
	scanf("%d", &n);

	for ( i = 1; i <= n; i++)
	{
		sum += countdigit(i);
	}
	printf("%d\n", sum);
	return 0;
}
