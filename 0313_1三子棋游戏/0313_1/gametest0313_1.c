//����������

#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void game()
{
	char ret = 0;
	//�������ڴ���߳���������Ϣ
	char board[ROW][COL] = {0};
	InitBoard(board,ROW,COL);//��ʼ��������� �ÿո����
	DisplayBoard(board,ROW,COL);//��ӡ����
	//��ʼ����
	while (1)
	{
		//��ҿ�ʼ����
		PlayerMove(board,ROW,COL);//�������һ����������
		DisplayBoard(board, ROW, COL);//��ӡ�������������
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		//���Կ�ʼ����
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ�ˣ�\n");
	}
	else if (ret=='#')
	{
		printf("����Ӯ�ˣ�\n");
	}
	else
	{
		printf("ƽ��\n");
	} 
}
void menu()
{
	printf("************************\n");
	printf("******��������Ϸ********\n");
	printf("****1.��ʼ**2.����******\n");
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default: 
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	
}
int main()
{
	test();

	return 0;
}