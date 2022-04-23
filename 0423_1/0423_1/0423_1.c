#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>  

//杨氏矩阵
// 1 2 3
// 4 5 6
// 7 8 9
// 每行从左到右递增
// 每列从上到下递增
//编写程序 在这样的矩阵中找一个数是否存在
//时间复杂度小于O(N)  就是不能去遍历这个数组
int FindNum(int arr[3][3], int k, int* px, int* py)
{
    int x = 0;
    int y = *py - 1;
    while (x <= *px-1 && y >= 0)
    {
        if (arr[x][y] > k)
        {
            y--;
        }
        else if (arr[x][y] < k)
        {
            x++;
        }
        else
        {
            //printf("找到了，%d 的下标是%d %d", k, x, y);
            *px = x;
            *py = y;
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[3][3] = { {1, 2, 4 },{ 4, 5, 6}, {7, 8, 9} };
    int k = 7;
    int x = 3;
    int y = 3;
    //返回型参数
    int ret = FindNum(arr, k, &x, &y);
    if (ret == 1)
    {
        printf("找到了！%d 的下标为（%d，%d）\n", k, x, y);
    }
    else
    {
        printf("找不到\n");
    }
    return 0;
}
//int is_left_move(char* str1, char* str2)
//{
//    int len1 = strlen(str1);
//    int len2 = strlen(str2);
//    if (len1 != len2)
//        return 0;
//    //1.在str1字符串中追加一个str1；
//    //strcat
//    //strncat
//    //strcat(str1, str1);自己给自己追加时，不能用strcat这个函数
//    strncat(str1, str1, len1);
//    //2.判断str2指向的字符串是否是str1指向的字符串的字串
//    //strstr - 找字串
//    char* ret = strstr(str1, str2);
//    if (ret == NULL)
//    {
//        return 0;
//    }
//    else
//    {
//        return 1;
//    }
//
//}
//int main()
//{
//    char arr1[30] = "abcdef";
//    char arr2[] = "cdefab";
//    int ret = is_left_move(arr1, arr2);
//    if (ret == 1)
//    {
//        printf("Yes\n");
//    }
//    else
//    {
//        printf("No\n");
//    }
//    return 0;
//}

//int main()
//{
//    char arr1[10] = "abc";
//    char arr2[] = "def";
//    strcat(arr1, arr2);
//    printf("%s", arr1);
//    return 0;
//}
//int main()
//{
        //int a, b;
        //for (a = 1, b = 1; a <= 100; a++)
        //{
        //    if (b >= 10)
        //        break;
        //    if (b % 5 == 1) 
        //    { 
        //        b += 5;// 6 11
        //        continue; 
        //    }
        //}
 /*   char ch;
    while ((ch = getchar()) != 'e') 
        printf("*");*/

  /*  int e = 0;
    scanf("%d", e);
    while (!e)
        printf("%d", e);*/
       /* printf("%d\n", a);*/
//	return 0;
//}
//int main()
//{
//	int t = 0;
//	int x=0;
//	for(t = 1; t <= 100; t++)
//	{
//	scanf("%d", &x);
//	if (x < 0)  
//		continue;
//		printf("%d\n", t);
//	}
//}
//int main()
//{
//    int y = 9;
//    for (; y > 0; y--)
//    {
//        if (y % 3 == 0)
//        {
//            printf("%d", --y);//852
//            continue;
//        }
//    }
//    return 0;
//}
//当a = 1, b = 3, c = 5, d = 4时，执行完下面一段程序后x的值是_____。

//int main()
//{
//    int x = 0;
//    int a = 1;
//    int b = 3;
//    int c = 5;
//    int d = 4;
//    if (a < b)
//        if (c < d)
//            x = 1;
//        else
//            if (a < c)
//                if (b < d)   x = 2;
//                else   x = 3;
//            else   x = 6;
//    else
//        x = 7;
//    printf("%d\n", x);
//    return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (!year % 400 ||!year % 4  && year % 100)
//	{
//		printf("%d 是闰年\n", year);
//	} 
//	return 0;
//}
//int main()
//{
//       int i, j, m = 1, s = 0;
//        for (i = 1; i < 3; i++)
//
//            for (j = 3; j > 0; j--)
//            {
//                m = i * j; //3 2 1 6 4 2 
//                s = s + m; //3 2 1 6 4 2 
//            }
//        printf("s = % d\n", s);
//	return 0;
//}
//int main()
//{
//    int  m, n;
//    printf("Enter m,n;");
//    scanf("%d%d", &m, &n);
//    while (m != n)
//    {
//        while (m > n)
//            m = m - n;  //m=23 9   9  4  4  3 2 1 
//        while (n > m)
//            n = n - m;  //n=14 14  5     5  1 1 1
//    }
//    printf("m=%d\n", m);
//    return 0;
//}
//int main()
//{
//	int i, j;
//	for (i = 1; i < 4; i++) 
//	{
//		for (j = i; j < 4; j++)
//		{
//			printf("%d * %d = %d  ", i, j, i * j);
//		}
//			printf("\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int i, j = 0;
//	int count = 0;
//	for (i = 5; i; i--)//5
//	{
//		for (j = 0; j < 4; j++) //4
//		{ 
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}
//

//int main()
//{
//	int i = 5, s = 0;
//	while (i--)  // 4 3 2 1 0
// 		if (i % 2) // 0 1 0   1   0 
//			continue;
//		else s += i;  //4 + 2   
//	printf("%d\n", s);
//}
//int main()
//{
//int m = 20;
//int count = 0;
//while (m = 0)
//{
//	m = m++;
//	count++;
//}
//printf("%d\n", count);
//}
//int main()
//{
//    int  num = 0, s = 0;
//
//    while (num <= 2)
//    {
//        num++; //1 2 3
//        s += num;//1 + 2 + 3
//    }
//    printf("%d\n", s);
//
//    return 0;
//}
//int main()
//{
//    for (int i = 1; i < 6; i++) {
//        if (i % 2 != 0) {
//            printf("#");
//            continue;
//        }
//        printf("*");
//    }
//    printf("\n");
//
//    return 0;
//}
//int main(void)
//
//{
//
//	int m, k = 0, s = 0;
//
//	for (m = 1; m <= 4; m++) {
//
//		switch (m % 4) {
//
//		case 0:
//
//		case 1: s += m; break;
//
//		case 2:
//
//		case 3: s -= m; break;
//
//		}
//
//		k += s;
//
//	}
//
//	printf("%d\n", k);
//
//	return 0;
//
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x <= 3)
//	{
//
//	}
//	else if (x != 10)
//	{
//		printf("%d\n", x);
//	}
//	return 0;
//}
//int main()
//{
//	int a, b = 0;
//		scanf("%d%d", &a, &b);
//		printf("%d %d\n", a, b);
//	return 0;
//}
