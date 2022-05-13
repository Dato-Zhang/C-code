#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

/*   CONTACT
1.test.c 用来做测试
2.contact.c 实现函数功能
3.contact.h 声明函数
通讯录功能：

1.存放1000个好友的信息（名字，电话，性别，住址，年龄）
2.通讯录能够增加好友信息
3.通讯录能够删除制定名字的好友信息
4.查找好友信息
5.修改好友信息
6.能够打印出好友信息
7.排序
......
*/

void menu()
{
	printf("*********************************************\n");
	printf("********* 1.add         2.del    ************\n");
	printf("********* 3.search      4.modify ************\n");
	printf("********* 5.show        6.sort   ************\n");
	printf("*********        0.exit          ************\n");
	printf("*********************************************\n");
		
}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录，里面包含：data指针，size，capacity
	//int size = 0;
	//struct PeoIofo con[MAX];//存放1000个人的信息
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			Delcomtact(&con);
			break;
		case SEAECH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			//销毁通讯录 - 释放动态开辟的内存
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (1);

	return 0;
}