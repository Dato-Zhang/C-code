#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>	

int main()
{
	//���ļ�text.txt
	//���·��
	//.. ��ʾ��һ·��
	//. ��ʾ��ǰ·��
	//fopen("../../test.txt", "r");
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	else
	{
		printf("�򿪳ɹ�\n");
		//���ļ�
		//�ر��ļ�
		fclose(pf);
		pf = NULL;
	}

	//����·��
	//fopen("C:\\Users\\mumu\\Desktop\\visual stdio codes\\0513_1\\0513_1", "r");
	return 0;
}
