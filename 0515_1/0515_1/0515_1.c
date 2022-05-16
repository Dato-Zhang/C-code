#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf==NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//1.定位文件指针
	fseek(pf, -2, SEEK_END);
	//2.读取文件
	int ch = fgetc(pf);
	printf("%c\n", ch);
	fclose(pf);
	pf = NULL;

	return 0;
}
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	//struct S s = { "张三",20,55.5 };
//	struct S tmp = { 0 };
//
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	////以二进制的形式写文件
//	//fwrite(&s, sizeof(struct S), 1, pf);
//
//	//以二进制的形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %f", tmp.name, tmp.age, tmp.score);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//
//	//struct S s = { 100,3.14f,"abcdef" };
//	//struct S tmp = { 0 };
//	//char buf[1024] = { 0 };
//	////把格式化的数据转换成字符串存储在buf
//	//sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	////printf("%s\n", buf);
//	////从buf中读取格式化的数据到tmp中
//	//sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &tmp.arr);
//	//printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//
//	//对比一组函数
//	//scanf/fscanf/sscanf
//	//printf/fprintf/sprintf
//	//scanf/printf  是针对标准输入流/标准输出流的 格式化输入/输出语句
//	//fscanf/fprintf是针对所有输入流/所有输出流的 格式化输入/输出语句
//	//				(包含标准输入/输出流）
//	//sscanf 是从字符串中读取格式化的数据
//	//sprintf是把格式化的数据输出成（存储到）字符串
//
//
//}