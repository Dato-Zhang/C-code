#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#define SQUARE(X) X*X


int main()
{
	int ret = SQUARE(5);//���滻Ϊ5*5
	printf("%d ", ret);

	return 0;
}
//int main()
//{
//	//Ԥ�������
//	//__FILE__ - �������ڵ�Դ�ļ�������
//	//printf("%s\n", __FILE__);
//	//__LINE__ - �������ڵ�����
//	//printf("%d\n", __LINE__);
//
//	//printf("%s\n", __DATE__);
//
//	//printf("%s\n", __TIME__);
//
//	//д��־�ļ�
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for ( i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s\nline:%d\ndate:%s\ntime:%s\ni = %d\n",
//								__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	printf("%s \n", __FUNCTION__);
//	for ( i = 0; i < 10 ;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//printf("%d \n ", __STDC__);
//	return 0;
//}