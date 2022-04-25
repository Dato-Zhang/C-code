#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcqwer";
	
	int ret = strcmp(p1, p2);
	printf("%d\n", ret);
	return 0;
}
//int my_strcmp(const char* str1,const char* str2)//只是用来比较大小，不希望被改变 要加上const
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//	{
//		//return 1;
//	}
//	else
//	{
//		//return -1;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "qwert";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//
//
//	return 0;
//}