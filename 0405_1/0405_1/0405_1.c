#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = -10;

	return 0;
}
//int main()
//{
//    int a = 1234;
//    printf("%#o %#X", a, a);//printf可以使用使用格式控制串
//    //“%o”、“%X”分别输出八进制整数和十六进制整数，并使用修饰符“#”控制前导显示
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 0xABCDEF;
//    printf("%15d\n", a);
//    return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF意为-1。本语句即只要输入项是字符即可打印
//	{
//		//因为回车也算一个字符，所以在输入第一个字符换行后，getchar会读取换行的回车键
//		//换行的回车被读取，若防止回车被读取，可在其前面多读取一次消耗回车
//		getchar();
//		putchar(ch + 32);
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    char a, b = '0';
//    scanf("%c", &a);
//    printf("\n");
//    getchar();
//    scanf("%c", &b);
//    printf("\n")
//    getchar();
//    printf("%c\n", a + 32);
//    printf("%c\n", b + 32);
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    float b, c, d = 0;
//    scanf("%d;%f,%f,%f", &a, &b, &c, &d);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float a = 0;
//	scanf("%f", &a);
//printf("%.f\n", a);
//	return 0;
//}
//
//int main()
//{
//	char a = '0';
//	scanf("%c", &a);
//	printf("%d\n", a);
//	return 0;
//}

//形参用两个指针
//void test(int* p1,int* p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//int main()
//{
//	int a, b = 0;
//	test(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
//形参用数组
//void test(int arr[])
//{
//	arr[0] = 1;
//	arr[1] = 2;
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	printf("%d %d", arr[0], arr[1]);
//	return 0;
//}