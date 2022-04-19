#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	

void move(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{	//��ż��
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;//��������������� left++
		}
		//������
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;//�����ż�������� right--
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
//	int total = 0;//ͳ�ƺȵ�ƿ��
//	int empty = 0;//ͳ�ƺȵĿ�ƿ��
//	//���������ˮ һƿһԪ
//	total = money;
//	empty = money;
//	//����������ˮ
//	while (empty >=2 )
//	{//������ƿ�ܻ�һƿ����
//		//empty = empty / 2;����ʣ��Ŀ�ƿ�ܻ�����ƿ����
//		//total = total + empty;������ϻ������ȵ�������
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}
//int main()
//{
//	struct student
//		//�ṹ�������� struct student
//	{
//		int num;
//		char name[30];
//		float score;
//
//	}stu;
//	//stu���û�����ṹ�������
//	return 0;
//}