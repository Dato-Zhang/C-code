#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

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
//������Ϣ
struct PeoIofo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//ͨѶ¼����
struct Contact
{
	struct PeoIofo data[MAX];//��Ÿ�����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���

};
//��������
//��ʼ��ͨѶ¼����
void InitContact(struct Contact* ps);
//������Ϣ�ĺ���
void AddContact(struct Contact* ps);
//��ӡͨѶ¼�ĺ���
void ShowContact(const struct Contact* ps);
//ɾ��ָ������ϵ�˺���
void Delcomtact(struct Contact* ps);
//����ͨѶ¼��ָ�����˵���Ϣ�ĺ���
void SearchContact(struct Contact* ps);
//�޸�ָ������ϵ������
void ModifyContact(struct Contact* ps);

