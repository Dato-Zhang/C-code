#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//描述一个学生 要用一些数据
//名字
//年龄
//性别
//电话
// 
//struct 结构体关键字
//stu 结构体标签
//struct stu 结构体类型

//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char sex[5];
//	char tele[12];
//	//定义一个结构体类型
//}; s1, s2, s3;//三个全局的结构体变量
////定义变量 s1 s2 s3

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
	//成员变量
	char name[20];
	short age;
	char sex[5];
	char tele[12];
	//定义一个结构体类型
}Stu;//类型

void Print1(Stu s)
{
	printf("姓名: %s\n", s.name);
	printf("年龄: %d\n", s.age);
	printf("性别: %s\n", s.sex);
	printf("电话: %s\n", s.tele);
}

void Print2(Stu* ps)
{
	printf("姓名: %s\n", ps->name);
	printf("年龄: %d\n", ps->age);
	printf("性别: %s\n", ps->sex);
	printf("电话: %s\n", ps->tele);
}

int main()
{
	Stu s = { "张三",32,"男","12323237865" };
	//打印结构体数据
	Print1(s);//传参
	Print2(&s);//传址
	system("pause");

	return 0;
	
}
//int main()
//{
//	struct Stu s1 = {"张三",21,"男","18923122323"};//创建定义结构体变量   局部变量
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