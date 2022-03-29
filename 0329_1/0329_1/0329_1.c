#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//再次优化
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
// 把src指向的字符串拷贝到dest指向的空间里面
// 包含'\0'
//	while (*dest++ = *src++)
//	{
//		//*dest++ = *src++;
//	}
//	return ret;
//}
//再次优化
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		//*dest++ = *src++;
//	}
//}

//优化后
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

//优化前

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
//	//const 放在指针变量的*左边时
//	//修饰的是*p 也就是说不能去通过p来改变*p（num）的值； 
//	//*p = 10;err
//	//int n = 100; 
//	//int* const p = &a; 
//	//const放在指针变量的*右边时，修饰的是指针变量p本身
//	// p不能被改变了
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
//	int c = Add(a, b);//链接错误
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
//	//整数存放到内存中的是补码
//}
int main()
{
	int a = 1;
	char* p = (char*) & a;
	if (*p==1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
 }