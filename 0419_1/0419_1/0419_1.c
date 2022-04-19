#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	

void move(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{	//找偶数
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;//如果是奇数就跳过 left++
		}
		//找奇数
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;//如果是偶数就跳过 right--
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;	 
		}
	}
}

void print(int arr[],int sz )
{
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]); 
	}
	return ;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;//统计喝的瓶数
//	int empty = 0;//统计喝的空瓶数
//	//买回来的汽水 一瓶一元
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty >=2 )
//	{//两个空瓶能换一瓶饮料
//		//empty = empty / 2;计算剩余的空瓶能换多少瓶饮料
//		//total = total + empty;计算加上换回来喝的饮料数
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}
//int main()
//{
//	struct student
//		//结构体类型是 struct student
//	{
//		int num;
//		char name[30];
//		float score;
//
//	}stu;
//	//stu是用户定义结构体变量名
//	return 0;
//}