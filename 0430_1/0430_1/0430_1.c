#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S1
{
	char c1;
	int a;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int a;
};
int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));

	struct S1 s2 = { 0 };
	printf("%d\n", sizeof(s2));

	return 0;
}
//struct T 
//{
//	double weight;
//	short age;
//
//};
//struct	S
//{
//	char c;
//	struct T st;
//	int a;
//	double b;
//	char arr[20];
//};
//int main()
//{
//	//�ṹ���ʼ��
//	//struct S s = { 'a',100,3.14,"hello world" };
//	//�ṹ��ķ���
//	struct S s = { 'a',{55.6,20}, 100,3.14,"hello world" };
//	printf("%c %lf %d %d %lf %s", s.c, s.st.weight, s.st.age, s.a, s.b, s.arr);
//	return 0;
//}
/*
typedef struct Node

{
	int data;
	struct Node* next;
}Node;
int main()
{
	struct Node n1;
	Node N2;
	return 0;
}*/

//�ṹ���������

//struct Node
//{
//	int data;
//	struct Node* next;
//};
////�����ṹ������
//
//struct
//{
//	char a;
//	char b;
//	int c;
//}x, y, z;//ֻ��ͨ�������б����ַ�ʽ�����ṹ�����
////����������������
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4, s5, s6;
//
//struct Stu s3;
//int main()
//{
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}