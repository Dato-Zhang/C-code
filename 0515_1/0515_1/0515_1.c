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
	//1.��λ�ļ�ָ��
	fseek(pf, -2, SEEK_END);
	//2.��ȡ�ļ�
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
//	//struct S s = { "����",20,55.5 };
//	struct S tmp = { 0 };
//
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	////�Զ����Ƶ���ʽд�ļ�
//	//fwrite(&s, sizeof(struct S), 1, pf);
//
//	//�Զ����Ƶ���ʽ���ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %f", tmp.name, tmp.age, tmp.score);
//
//
//	//�ر��ļ�
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
//	////�Ѹ�ʽ��������ת�����ַ����洢��buf
//	//sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	////printf("%s\n", buf);
//	////��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	//sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &tmp.arr);
//	//printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//
//	//�Ա�һ�麯��
//	//scanf/fscanf/sscanf
//	//printf/fprintf/sprintf
//	//scanf/printf  ����Ա�׼������/��׼������� ��ʽ������/������
//	//fscanf/fprintf���������������/����������� ��ʽ������/������
//	//				(������׼����/�������
//	//sscanf �Ǵ��ַ����ж�ȡ��ʽ��������
//	//sprintf�ǰѸ�ʽ������������ɣ��洢�����ַ���
//
//
//}