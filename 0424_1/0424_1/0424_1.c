#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>	
#include<string.h>

char* my_strcat(char* dest,const char* src)
{
	assert(dest && src);
	char* ret = dest;
	//1.�ҵ�Ŀ���ַ����е�'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.׷��
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}

//char* my_strcpy(char* dest,const char* src)
//{
//	assert(*dest != NULL);
//	assert(*src != NULL);
//	char* ret = dest;
//	//��srcָ����ַ���������destָ��Ŀռ��У�����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char dest[] = "abcdef";
//	char src[] = "bit";
//	my_strcpy(dest, src);
//	printf("%s\n", dest);
//	return 0;
//}
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	//char arr2[] = { 'a','b','c','d','e','f' };
//	//int len2 = my_strlen(arr2);
//
//	printf("%d\n", len);
//	//printf("%d\n", len2);
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}