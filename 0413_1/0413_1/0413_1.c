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
//	//void* ���͵�ָ�룬���Խ����������͵ĵ�ַ
//	//void* ���͵�ָ�룬���ܽ��н����ò���
//	void* pa = &a;
//	//*p = 0;��֪��void*��ʲô���ͣ����ܽ�����
//	//p++;//void* ��֪����ʲô����	
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
//    for (int i = 0; i & lt; a; i++)//����a������
//    {
//        scanf("%f ", &amp; arr[i]);
//        sum = sum + arr[i];
//    }
//
//    for (int j = 0; j & lt; a; j++)//��ð�������ҳ����ֵ������Сֵ
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
    hour=time/3600;//����Сʱ
    time=time-3600*hour;//ȥ���Ѿ������Сʱ������
    minu=time/60;//�������
    seco = time-60*minu;//ȥ���Ѿ�����ɷ��ӵ�����
    printf("%d %d %d",hour,minu,seco);
return 0;
}*/