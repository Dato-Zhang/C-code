#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc( DEFAULT_SZ * sizeof(struct PeoInfo));
	//�ж��Ƿ񿪱ٳɹ�
	if (ps->data == NULL)
	{
		return 0;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;

}

//��������Ƿ�����
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//���ˣ�����
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;

			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

//���Ӹ�����Ϣ
void AddContact(struct Contact* ps)
{
	//��������Ƿ��Ѿ�����
	//1.������ˣ������ӿռ�
	//2.���������ʲô������
	CheckCapacity(ps);
	//���Ӹ�������
		printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	printf("���ӳɹ�\n");
	/*if (ps->size == MAX)
	{
		printf("ͨѶ¼����,�޷�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("���ӳɹ�\n");	
	}*/
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		//����
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		//���� 
		for ( i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
static int FindByName(struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	} 
	//�Ҳ��������
	return -1;
}


void Delcomtact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//1.����Ҫɾ�����˵�λ��
	//�ҵ��˷�����������Ԫ�ص��±�
	//�Ҳ�������-1
	
	int pos = FindByName(ps,name);
	
	//2.ɾ��
	if (pos == -1)
	{
		//Ҫɾ�����˲�����
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for ( j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�!\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸��˲�����\n");
	}
	else
	{
			printf("����������:>");
			scanf("%s", ps->data[pos].name);
			printf("����������:>");
			scanf("%d", &(ps->data[pos].age));
			printf("�������Ա�:>");
			scanf("%s", ps->data[pos].sex);
			printf("������绰:>");
			scanf("%s", ps->data[pos].tele);
			printf("�������ַ:>");
			scanf("%s", ps->data[pos].addr);
 
			printf("�޸����\n");
	}
}

void SortContact(struct Contact* ps)
{

}

	
void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}