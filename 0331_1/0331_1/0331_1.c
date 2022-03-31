#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void Nextmonth(int month, day, year);
void Nextday(int month, int day, int year)
{
	//先去判断是否为闰年
    int a = 0;
        if (year % 400 == 0)
        {
            if (month == 2)
            {
                if(day == 30 || day == 31)
                {
                //printf("不可能");
                    a = 1;
                }
                else if (day != 29)//闰年二月29天
                {
                    day = day + 1;
                }
                else
                {
                    day = 1;
                }
            }
            else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            {
                if (day != 31)//闰年其他月31天
                {
                    day = day + 1;
                }
                else
                {
                    day = 1;
                }
            }
            else
            {
                if (day == 31)
                {
                    //printf("不可能");
                    a = 1;
                }
                else if (day != 30)//闰年30天
                {
                    day = day + 1;
                }
                else
                {
                    day = 1;
                }
            }
        }
        else if (year % 4 == 0 && year % 100 != 0)
        {
            if (month == 2)
            {
        
                if (day == 30 || day == 31)
                {
                    //printf("不可能");
                    a = 1;
                }
                else if (day != 29)//闰年二月29天
                {
                    day = day + 1;
                }
                else
                {
                    day = 1;
                }
            }
            else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            {
                if (day == 31)
                {
                    //printf("不可能");
                    a = 1;
                }
                else if (day != 30)//闰年其他月30天
                {
                    day = day + 1;
                }
                else
                {
                    day = 1;
                }
            }
            else
            {
                if (day != 31)//闰年31天
                {
                    day = day + 1;
                }
                else
                {
                    day = 1;
                }
            }

        }
        else
        {
                if (month == 2)
                {
                    if (day == 29 || day == 30 || day == 31)
                    {
                        //printf("不可能");
                        a = 1;
                    }
                    else if (day != 28 )//平年二月28天
                    {
                        day = day + 1;
                    }
                    else
                    {
                        day = 1;
                    }
                }
                else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
                {
                    if (day != 31)//平年其他月31天
                    {
                        day = day + 1;
                    }
                    else
                    {
                        day = 1;
                    }
                }
                else
                {
                    if (day == 31)
                    {
                        //printf("不可能");
                        a = 1;
                    }
                    else if (day != 30)//平年30天
                    {
                        day = day + 1;
                    }
                    else
                    {
                        day = 1;
                    }
                }
        }

        //printf("%d ", day);//以上来判断下一天
        //判断下一月
        if (day == 1)
        {
            month = month + 1;
        }
        else
        {
            month = month;
        }
        //printf("%d ", month);
        //printf("%d ", day);//以上来判断下一天
        //判断下一年
        if (month != 12)
        {
            year = year;
        }
        else
        {
            year = year + 1;
        }
        //printf("%d", year);
        switch (a)
        {
        case 1:
            printf("不可能");
            break;
        default:
            printf("%d ", month);
            printf("%d ", day);
            printf("%d", year);
        break;
        }
}

int main()
{
	int month, day, year = 0;
	scanf("%d %d %d", &month, &day, &year);
	if ((month >= 1 && month <= 12) && (day >= 1 && day <= 31) && (year >= 1900 && year <= 2050))
	{
        Nextday(month, day, year);//下一天
	}
	return 0;
}








//int main()
//{
//	printf("Hello World\n");
//		return 0;
//}

//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));//也可以用%zu来打印，不会报错
//	return 0;
//}
//int a = 20;
//int main()
//{
//	int b = 20;
//	printf("%d\n", b);
//	int a = 21;
//	printf("%d\n", a);
//	return 0;
//}

//求两个输的和
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a + b;
//	printf("%d+%d=%d\n", a, b, c);
//	return 0;
//}

//声明来自外部的符号
//extern int a;
//
//int main()
//{
//	{
//		
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//
//}
// 
 
//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}