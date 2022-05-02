#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//位段 - 二进制位

struct A
{
	int _a : 2;
	int _b : 5;
	int c : 10;
	int d : 30;
};
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;

};
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;

	//struct A s;
	//printf("%d\n", sizeof(s));
		return 0;
}
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
////结构体传参
////1.传值
//void Iint(struct S* ps )
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
////2、传址
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s;
//	//对s的内容进行初始化
//
//    Iint(&s);
//	Print1(s);
//	Print2(&s);
//	/*s.a = 100;
//	s.c = 'a';
//	s.d = 3.14;
//	printf("%d\n", s.a);*/
//
//	return 0;
//	}