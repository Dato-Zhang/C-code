#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//�ٴ��Ż�
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
// ��srcָ����ַ���������destָ��Ŀռ�����
// ����'\0'
//	while (*dest++ = *src++)
//	{
//		//*dest++ = *src++;
//	}
//	return ret;
//}
//�ٴ��Ż�
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		//*dest++ = *src++;
//	}
//}

//�Ż���
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			*dest++ = *src++;
//		}
//	}
//}

//�Ż�ǰ

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//int main()
//{
//	char arr1[] = "#######################################";
//	char arr2[] = "bit";
//	
//	printf("%s\n", my_strcpy(arr1, arr2));
//	
//	return 0;
//}

//int main()
//{
//	const int a = 20;
//	//const int* p = &a;
//	//const ����ָ�������*���ʱ
//	//���ε���*p Ҳ����˵����ȥͨ��p���ı�*p��num����ֵ�� 
//	//*p = 10;err
//	//int n = 100; 
//	//int* const p = &a; 
//	//const����ָ�������*�ұ�ʱ�����ε���ָ�����p����
//	// p���ܱ��ı���
//	//p = &n;//err
//	printf("%d\n", a);
//	return 0;
//}
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefddd";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);//���Ӵ���
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;//0x000000809796F9B4
//	float b = 10.0;// 0x000000809796F9D4
//	return 0;
//}

//void test(void)
//{
//	printf("haha");
//}
//int main()
//{
//	test(100);
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//	//������ŵ��ڴ��е��ǲ���
//}
int main()
{
	int a = 1;
	char* p = (char*) & a;
	if (*p==1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
 }