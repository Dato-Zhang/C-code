#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//����һ��ѧ�� Ҫ��һЩ����
//����
//����
//�Ա�
//�绰
// 
//struct �ṹ��ؼ���
//stu �ṹ���ǩ
//struct stu �ṹ������

//struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char sex[5];
//	char tele[12];
//	//����һ���ṹ������
//}; s1, s2, s3;//����ȫ�ֵĽṹ�����
////������� s1 s2 s3

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};

typedef struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char sex[5];
	char tele[12];
	//����һ���ṹ������
}Stu;//����

void Print1(Stu s)
{
	printf("����: %s\n", s.name);
	printf("����: %d\n", s.age);
	printf("�Ա�: %s\n", s.sex);
	printf("�绰: %s\n", s.tele);
}

void Print2(Stu* ps)
{
	printf("����: %s\n", ps->name);
	printf("����: %d\n", ps->age);
	printf("�Ա�: %s\n", ps->sex);
	printf("�绰: %s\n", ps->tele);
}

int main()
{
	Stu s = { "����",32,"��","12323237865" };
	//��ӡ�ṹ������
	Print1(s);//����
	Print2(&s);//��ַ
	system("pause");

	return 0;
	
}
//int main()
//{
//	struct Stu s1 = {"����",21,"��","18923122323"};//��������ṹ�����   �ֲ�����
//	Stu s2;
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%d\n", t.s.a);
//	printf("%s\n", t.s.arr);
//	printf("%c\n", t.s.c);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//} 