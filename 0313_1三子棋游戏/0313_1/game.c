#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdio.h>


//函数具体实现   先定义，再去声明        从定义到声明函数 去分号 加大括号；   
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{

			board[i][j] = ' ';
		}

	}

}



void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1 打印一行数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}

		}
		printf("\n");
		//	printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
			//2 打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}printf("\n");

		}

	}
}





void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入坐标：>");
		scanf("%d%d", &x, &y);
		//防止输入的坐标溢出，判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)//坐标在程序中是从0 0开始的，但用户一般认为坐标为1 1，方便用户使用将坐标改成1 1 。
		{
			if (board [x - 1] [y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("输入的坐标已被占用，请重新输入！\n");
			}
		}
		else
		{
			printf("输入的坐标错误，请重新输入\n");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");

	int x, y = 0;//电脑走的坐标
	
	while (1)
	{
		x = rand() % row;//模row 值只可能为 0 1 2
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//返回1 表示棋盘已经满了  返回 0 表示棋盘没满，游戏继续
int IsFull(char board[ROW][COL],int row,int col)
{
	int i, j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//没满
			}
		}
	}
	return 1;//满了

}
char IsWin(char board[ROW][COL], int row, int col)
{
	//判断横三行
	int i = 0;
	for ( i = 0; i < row; i++)//判断三行棋 看是否有连成三个的
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断竖三列
	int j = 0;
	for ( j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//判断两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断是否为平局
	if (1==IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	return 'c';
}






