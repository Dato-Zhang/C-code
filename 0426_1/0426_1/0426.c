#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strstr(const char* p1,const char* p2)
{
	assert(p1 && p2);
	char* s1 = (char*)p1;
	char* s2 = (char*)p2;
	char* cur = (char*)p1;
	if (*p2 == '\0')
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 =(char*) p2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;//�ҵ�
		}
		cur++;
	}
	return NULL;//�Ҳ���
}
int main()
{
	char* p1 = "abcddddddefa";
	char* p2 = "dddefasdasdadadad";
	char* ret = my_strstr(p1, p2);
	if (ret != NULL)
	{
		printf("�ҵ���\n");
		printf("%s\n", ret);
	}
	//printf("%d\n", ret);
	return 0;
}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strcmp(p1, p2);
//	int ret2 = strncmp(p1, p2, 3);
//	
//	printf("%d %d\n", ret,ret2);
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a, b, c = 0;
//	scanf("%d %d", &m, &n);
//	//ÿ��ͬѧ�ֵ�a��ƻ��
//	a = m / n;
//	//һ���ֳ�ȥb��ƻ��
//	b = a * n;
//	//��c��ƻ���Żر���
//	c = m % n;
//	printf("%d %d %d", a, b, c);
//	return 0;
//}