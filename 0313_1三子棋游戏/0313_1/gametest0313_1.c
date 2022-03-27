//测试三子棋

#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void game()
{
	char ret = 0;
	//数组用于存放走出的棋盘信息
	char board[ROW][COL] = {0};
	InitBoard(board,ROW,COL);//初始化这个棋盘 用空格填充
	DisplayBoard(board,ROW,COL);//打印棋盘
	//开始下棋
	while (1)
	{
		//玩家开始下棋
		PlayerMove(board,ROW,COL);//玩家输入一个棋盘坐标
		DisplayBoard(board, ROW, COL);//打印玩家输入后的棋盘
		//判断玩家是否赢
		ret = IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		//电脑开始下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了！\n");
	}
	else if (ret=='#')
	{
		printf("电脑赢了！\n");
	}
	else
	{
		printf("平局\n");
	} 
}
void menu()
{
	printf("************************\n");
	printf("******三子棋游戏********\n");
	printf("****1.开始**2.结束******\n");
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default: 
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
	
}
int main()
{
	test();

	return 0;
}