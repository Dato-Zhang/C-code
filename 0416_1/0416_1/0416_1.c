#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5  p�ĵ�ַ+1 ����b�ĵ�ַ ��b��ʼ ��\0
	//printf("%d\n", strlen(*p));//err  a 
	//printf("%d\n", strlen(p[0]));//err  a
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));

	//printf("%d\n", sizeof(p));//4/8
	//printf("%d\n", sizeof(p + 1));//4/8
	//printf("%d\n", sizeof(*p));//1  �ַ����ĵ�һ���ַ�
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8
	//char arr[] = "abcdef";

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//
	////printf("%d\n", strlen(*arr));//err strlenҪ��һ����ַ
	////printf("%d\n", strlen(arr[1]));//err Ҫ����ַ
	//printf("%d\n", strlen(&arr));//
	//printf("%d\n", strlen(&arr + 1));//
	//printf("%d\n", strlen(&arr[0] + 1));//


	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//8/4 ��Ԫ�ص�ַ +0������Ԫ�ص�ַ
	//printf("%d\n", sizeof(*arr));//1   ��Ԫ�ص�ַ������ ��һ��Ԫ�صĴ�С
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//8/4
	//printf("%d\n", sizeof(&arr + 1));//8/4
	//printf("%d\n", sizeof(&arr[0] + 1));//8/4
	return 0;
}

/*
int main()
{
	*///����������Ԫ�ص�ַ ֻ�����������������
	//1.sizeof(������)
	//2.&������         �������������������ʾ��������
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16  sizeof(������)- �������������ܴ�С ��λ���ֽ�
	//printf("%d\n", sizeof(a + 0));// 4/8  a����������Ԫ�ص�ַ��32λ��4�ֽڣ�64λ��8�ֽ�
	//printf("%d\n", sizeof(*a));// 4��Ԫ�ؽ����ã���������Ԫ�صĴ�С 4���ֽ�
	//printf("%d\n", sizeof(a + 1));// 4/8    a+1 �ǵڶ���Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(a[1]));//4 �ڶ���Ԫ�� �� ���ǵڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&a));//ȡ��ַa��ȡ����Ҳ��a�ĵ�ַ��a�ĵ�ַҲ�ǵ�ַ����ַ����4/8���ֽ�
	//printf("%d\n", sizeof(*&a));//&���������ٽ����ã� �൱��& �� *������ ����������ܴ�С
	//printf("%d\n", sizeof(&a + 1));//&a+1��Ȼ��ַ������������ĵ�ַ ���ǻ���һ����ַ
	//printf("%d\n", sizeof(&a[0]));
	//printf("%d\n", sizeof(&a[0] + 1));
	// 
	// �ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0));
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));

	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));//arrû�е�������sizeof�ڲ���Ҳû��&�����������ʾһ����Ԫ�ص�ַ
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));

//	return 0;
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//Swap(char* buf1, char* buf2,int width)
//{
//	int i = 0;
//	for ( i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//				//void* ��������ָ�� ���Խ����������͵�ָ����ַ
//									//width ÿ��Ԫ�ص��ֽ�
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	//����
//	for ( i = 0; i < sz; i++)
//	{
//		//ÿһ��Ҫ�ȽϵĶ���
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				
//			}
//		}
//	}
//}
//void test4()
//{
//
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	printf("����ǰ\n");
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	printf("\n");
//	printf("������\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test5()
//{
//	struct Stu
//	{
//		char name[10];
//		int age;
//	};
//	struct Stu s[3] = {{"zhangsan",20}, {"lisi",30},{"wangwu",10}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	//ð������
//	bubble_sort(s, sz, sizeof(s[0]), cmp_int);
//}
//int main()
//{
//	test4();
//	return 0;
//}