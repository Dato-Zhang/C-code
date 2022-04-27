#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>

void* my_memcpy(void* dest, const void* src, size_t num)
{
	//*(char*)dest;//访问一个字节数
	void* ret = dest;
	assert(dest && src);

	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
struct S
{
	char name[20];
	int age;
};
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	//my_memcpy(arr + 2, arr, 20);
	memcpy(arr + 2, arr, 20);//来处理内存重叠的情况
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
//int main()
//{
//	/*char ch = '2';
//	int ret = isdigit(ch);
//	printf("%d\n", ret);*/
//	/*char ch = tolower('K');
//	putchar(ch);*/
//	//char arr[] = "I Am Iron Man";
//	//int i = 0;
//	//while (arr[i])
//	//{
//	//	if (isupper(arr[i]))
//	//	{
//	//		arr[i] = tolower(arr[i]);
//	//	}
//	//	i++;
//	//}
//	//printf("%s\n", arr);
//
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int arr2[5] = { 0 };
//	//struct S arr3[] = { {"张三",20},{"李四",30} };
//	//struct S arr4[3] = { 0 };
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//	//my_memcpy(arr2, arr1, sizeof(arr1));
//	
//	return 0;
//}