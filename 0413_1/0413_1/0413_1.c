#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	void* p = &a;
//	p = &ch;
//	//void* 类型的指针，可以接受任意类型的地址
//	//void* 类型的指针，不能进行解引用操作
//	void* pa = &a;
//	//*p = 0;不知道void*是什么类型，不能解引用
//	//p++;//void* 不知道是什么类型	
//	return 0;
//}
//#define N 11
//int main()
//{
//	int a[N] = { -1,3,5,6,8,12,56,85,95,100 };
//	int low, high, mid, data = 30;
//	low = 0;
//	high = N - 1;
//	int count = 0;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (a[mid] == data)
//		{
//			break;
//		}
//		else if (data > a[mid])
//			low = mid + 1;
//		else
//		{
//			high = mid - 1;
//		}
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include&lt;stdio.h&gt;
//
//int main()
//{
//    int a = 0;
//    int max = 0;
//    int min = 0;
//    int ave = 0;
//    int sum = 0;
//    scanf("%d", &amp; a);
//    float arr[a] = { 0 };
//
//    for (int i = 0; i & lt; a; i++)//输入a个分数
//    {
//        scanf("%f ", &amp; arr[i]);
//        sum = sum + arr[i];
//    }
//
//    for (int j = 0; j & lt; a; j++)//用冒泡排序，找出最大值，和最小值
//    {
//        for (int n = 0; n & lt; a - 1 - j; n++)
//        {
//            if (arr[i] & gt; arr[i + 1])
//            {
//                int t = 0;
//                t = arr[i + 1];
//                arr[i + 1] = arr[i];
//                arr[i] = t;
//            }
//        }
//    }
//
//    max = arr[a - 1];
//    min = arr[0];
//    ave = sum / a;
//
//    printf("%f %f %f", max, min, ave);
//
//
//    return 0;
//}
/*
int main()
{
    long long a = 31560000;
    int year = 0;
    scanf("%d",&amp;year);
    printf("%ld\n",year * a);
    return 0;
}
/*
int main()
{
    int a = 1;
    int n = 0;
    scanf("%d",  &amp;n );
    printf("%d\n",a&lt;&lt;n);
    return 0;
}
/*int main()
{

    int time=0;
    int hour=0;
    int minu=0;
    int seco=0;

    scnaf("%d",&amp;time);
    hour=time/3600;//计算小时
    time=time-3600*hour;//去掉已经计算成小时的秒数
    minu=time/60;//计算分钟
    seco = time-60*minu;//去掉已经计算成分钟的秒数
    printf("%d %d %d",hour,minu,seco);
return 0;
}*/