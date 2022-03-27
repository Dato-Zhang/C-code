#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdio.h>


//��������ʵ��   �ȶ��壬��ȥ����        �Ӷ��嵽�������� ȥ�ֺ� �Ӵ����ţ�   
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
		//1 ��ӡһ������
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
			//2 ��ӡ�ָ���
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
	printf("�����:>\n");
	while (1)
	{
		printf("���������꣺>");
		scanf("%d%d", &x, &y);
		//��ֹ���������������ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�����ڳ������Ǵ�0 0��ʼ�ģ����û�һ����Ϊ����Ϊ1 1�������û�ʹ�ý�����ĳ�1 1 ��
		{
			if (board [x - 1] [y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("����������ѱ�ռ�ã����������룡\n");
			}
		}
		else
		{
			printf("����������������������\n");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������:>\n");

	int x, y = 0;//�����ߵ�����
	
	while (1)
	{
		x = rand() % row;//ģrow ֵֻ����Ϊ 0 1 2
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//����1 ��ʾ�����Ѿ�����  ���� 0 ��ʾ����û������Ϸ����
int IsFull(char board[ROW][COL],int row,int col)
{
	int i, j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//û��
			}
		}
	}
	return 1;//����

}
char IsWin(char board[ROW][COL], int row, int col)
{
	//�жϺ�����
	int i = 0;
	for ( i = 0; i < row; i++)//�ж������� ���Ƿ�������������
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж�������
	int j = 0;
	for ( j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//�ж������Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж��Ƿ�Ϊƽ��
	if (1==IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	return 'c';
}






