#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//�������Լ��
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






//������  ���������Ӵ�С�������
 




//int main() {
/*	int a, b, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	//a�з����ֵ��b��֮��c��С��
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
//		printf("����������\n");
//		scanf("%s", &password);
//		if (strcmp(password,"123456")==0)//������ == ���Ƚ������ַ����Ƿ���ȣ�Ӧʹ��һ���⺯�� strcmp
//
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//
//	}
//	if (i==3)
//	{
//		printf("���������Σ����˳����ԣ�\n");
//	}
//
//
//}

//int main() {
//
//	/*
//	ʵ�����¹��ܣ�
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
//	int right = strlen(arr1) - 1;//����arr1����ĳ���  ����strlen��Ҫ�⺯��string.h
//	while (left <= right)
//	{
//
//
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(50);//��Ϣ0.5s  ����sleep������Ҫ�⺯��<windows.h>
//		//system("cls");//ִ��ϵͳ�����һ������     cls �����Ļ		����sysetm������Ҫ�⺯��<stdlib.h>
//		left++;
//
//		right--;//ע��right��-- ����++  ��ΪҪ��ǰȥ Ҫ��һ
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
//			printf("�ҵ��ˣ��±�Ϊ�� %d\n", mid);
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