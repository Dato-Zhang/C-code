#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

/*   CONTACT
1.test.c ����������
2.contact.c ʵ�ֺ�������
3.contact.h ��������
ͨѶ¼���ܣ�

1.���1000�����ѵ���Ϣ�����֣��绰���Ա�סַ�����䣩
2.ͨѶ¼�ܹ����Ӻ�����Ϣ
3.ͨѶ¼�ܹ�ɾ���ƶ����ֵĺ�����Ϣ
4.���Һ�����Ϣ
5.�޸ĺ�����Ϣ
6.�ܹ���ӡ��������Ϣ
7.����
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
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼�����������dataָ�룬size��capacity
	//int size = 0;
	//struct PeoIofo con[MAX];//���1000���˵���Ϣ
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��:>");
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
			//����ͨѶ¼ - �ͷŶ�̬���ٵ��ڴ�
			DestroyContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (1);

	return 0;
}