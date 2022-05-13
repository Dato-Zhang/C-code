#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEAECH,
	MODIFY,
	SHOW,
	SORT
};
//个人信息
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};


//通讯录类型
struct Contact
{
	struct PeoInfo* data;//存放个人信息
	int size;//记录当前已经有的元素个数
	int capacity;//记录当前通讯录最多能放多少个元素
};


//声明函数
//初始化通讯录函数
void InitContact(struct Contact* ps);

//增加信息的函数
void AddContact(struct Contact* ps);

//打印通讯录的函数
void ShowContact(const struct Contact* ps);

//删除指定的联系人函数
void Delcomtact(struct Contact* ps);

//查找通讯录中指定的人的信息的函数
void SearchContact(struct Contact* ps);

//修改指定的联系人信心
void ModifyContact(struct Contact* ps);

//排序通讯录内容
void SortContact(struct Contact* ps);

//销毁通讯录- 释放掉动态开辟的内存
void DestroyContact(struct Contact* ps);
