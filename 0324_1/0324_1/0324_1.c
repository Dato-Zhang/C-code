#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//fun3 ���Ž�
 
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
//fun2���� & ��λ�� ���ж�

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
//	//ģ2-���Ƿ���1 ��2-ȥ�����Ѿ��жϹ���
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
	//дһ������ ��a�Ķ����ƣ����룩��ʾ���м���1��
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
//	//Դ�룺10000000000000000000000000000001
//	// ����λ���䣬����λȡ��
//	//���룺11111111111111111111111111111110
//	// �����һ���ǲ���
//	//���룺11111111111111111111111111111111
//	if (i > sizeof(i))//sizeof�������/������ռ�ڴ�Ĵ�С��һ������>=0�ģ�����c���Թ涨sizeof��������Ķ����޷�����
//		//�޷��������з������Ƚϴ�Сʱ���з�����Ҫ��ת��Ϊ�޷���������ȥ�Ƚ�
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
//�������������ֵ
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
//	//������
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
//	//Init(arr,sz	);//�������ʼ��Ϊ0
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
////����Խ�絼��Ұָ������
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