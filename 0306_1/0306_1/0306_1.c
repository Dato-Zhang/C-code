#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//计算最大公约数
int main() {
	int m, n, r = 0;
	scanf("%d%d", &m, &n);
	while (m % n)
	{
		r = m % n;
		m = n;
		n = r;

	}
	printf("%d\n", n);
	return 0;
}


//
//int main()
//
//{
//	int i = 0;
//	int x = 0;
//	for(i=1;i<=100;i++)
//		if (i%9==0)
//		{
//			printf("%d\n", i);
//		}
//
//}






//三个数  将三个数从大到小排列输出
 




//int main() {
/*	int a, b, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	//a中放最大值，b次之，c最小。
	if (a < b)
	{
		int tmp;
		tmp= a;
		a=b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a=c;
		c = tmp;
	}
	if (b < c) 
	{
		int tmp;
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;

}*/


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", &password);
//		if (strcmp(password,"123456")==0)//不能用 == 来比较两个字符串是否相等，应使用一个库函数 strcmp
//
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//
//	}
//	if (i==3)
//	{
//		printf("已输入三次，请退出重试！\n");
//	}
//
//
//}

//int main() {
//
//	/*
//	实现以下功能：
//	##############
//	w############t
//	we##########it
//	wel########bit
//	...
//	welcome to bit
//
//	*/
//	char arr1[] = "welcome to bit";
//	char arr2[] = "##############";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;//计算arr1数组的长度  引用strlen需要库函数string.h
//	while (left <= right)
//	{
//
//
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(50);//休息0.5s  调用sleep函数需要库函数<windows.h>
//		//system("cls");//执行系统命令的一个函数     cls 清空屏幕		调用sysetm函数需要库函数<stdlib.h>
//		left++;
//
//		right--;//注意right是-- 不是++  因为要向前去 要减一
//
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 6;
//	int b = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = b - left;
//
//	while (left < right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为： %d\n", mid);
//			break;
//		}
//	}
//
//	return 0;
//}






//int main() {
//
//	int n=0;
//	int i=0;
//	int ret=1;
//	int sum = 0;
//	for (n=1;n<=3;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//		//printf("%d\n", ret);
//	}
//	printf("%d\n", sum);
//	//for (i = 1; i <= 10;)
//	//{
//	//	ret = ret * i;
//	//	printf("%d\n", ret);
//	//	i++;
//	//}
//
//	return 0;
//}
//
//
//
//
//





//int main()
//{
//	int x = 1;
//	do
//	{
//		printf("%d ", x);
//		x++;
//	}
//	while (x<=10);
//
//
//
//
//
//
//	return 0;
//}
//


//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//		
//
//		printf("haha\n");
//	}
//	}
//
//
//	 return 0;
//}