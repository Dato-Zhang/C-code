#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", arr[0]);
	return 0;
}
//用函数求任意两个数的和
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a, b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
int main()
{
	printf("好好学习\n");
	int line = 0;
	while (line <= 20000)
	{
		printf("%d 行代码\n", line);
		line++;
	}
	printf("已完成两万行代码\n");
	return 0;
}
int main()
{
	printf("c:\\test\\test.c");

	printf("%c\n", '\130');
	printf("%c\n", '\x90');

	/*
	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\0628\test.c"));
	*/
	int a = 0;
	printf("要好好学习吗？（1/0）");
	scanf("%d", &a);
	if (a == 1)
	{
		printf("要好好学习\n");
	}
	else
	{
		printf("不要好好学习");
	}
	return 0;
}