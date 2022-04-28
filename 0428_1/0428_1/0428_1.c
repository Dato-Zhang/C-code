#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//memset - 内存设置
int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);

	return 0;
}
//int main()
//{
//	int arr1[] = { 1,2,6,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 20);
//	printf("%d\n", ret);
//	return 0;
//}

////void* my_memcpy(void* dest,const void* src, size_t count)
////{
////	char* ret = dest;
////	assert(dest && src);
////	
////	while (count--)
////	{
////		*(char*)dest = *(char*)src;
////		++(char*)dest;
////		++(char*)src;
////	}
////	return ret;
////}
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//前到后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后到前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	my_memmove(arr3 + 2, arr3, 20);
//	return 0;
//	}