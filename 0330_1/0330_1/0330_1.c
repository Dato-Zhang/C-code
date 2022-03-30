#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//int Domin(int x, int y, int z)
//{
//    int min = 0;
//    if (x < y)
//    {
//        if (x < z)
//        {
//            min = x;
//        }
//        else
//        {
//            min = z;
//        }
//    }
//    else if (y < z)
//    {
//        min = y;
//    }
//    else
//    {
//        min = z;
//    }
//    return min;
//}
//
//int Domid(int x, int y, int z)
//{
//    int mid = 0;
//    if (x > y && x > z)
//    {
//        if (y > z)
//        {
//            mid = y;
//        }
//        else
//        {
//            mid = z;
//        }
//    }
//    else if (y > x && y > z)
//    {
//        if (x > z)
//        {
//            mid = x;
//        }
//        else
//        {
//            mid = z;
//        }
//    }
//    else
//    {
//        if (x > y)
//        {
//            mid = x;
//        }
//        else
//        {
//            mid = y;
//        }
//    }
//    return mid;
//}
//
//int Domax(int x, int y, int z)
//{
//    int max = 0;
//    if (x > y)
//    {
//        max = x;
//    }
//
//    else
//    {
//        max = y;
//    }
//    if (max > z)
//    {
//
//    }
//    else
//    {
//        max = z;
//    }
//    return max;
//}
//
//int main()
//{
//    int a, b, c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a == b && b == c && c == a)
//    {
//        printf("%d %d %d", a, b, c);
//    }
//    else
//    {
//        printf("%d ", Domax(a, b, c));
//        printf("%d ", Domid(a, b, c));
//        printf("%d", Domin(a, b, c));
//    }
//    return 0;
//}




int Domin(int x, int y, int z)
{
    int min = 0;
    if (x < y)
    {
        if (x < z)
        {
            min = x;
        }
        else
        {
            min = z;
        }
    }
    else if (y < z)
    {
        min = y;
    }
    else
    {
        min = z;
    }
    return min;
}

int Domid(int x, int y, int z)
{
    int mid = 0;
    if (x > y && x > z)
    {
        if (y > z)
        {
            mid = y;
        }
        else
        {
            mid = z;
        }
    }
    else if (y > x && y > z)
    {
        if (x > z)
        {
            mid = x;
        }
        else
        {
            mid = z;
        }
    }
    else
    {
        if (x > y)
        {
            mid = x;
        }
        else
        {
            mid = y;
        }
    }
    return mid;
}

int Domax(int x, int y, int z)
{
    int max = 0;
    if (x > y)
    {
        max = x;
    }

    else
    {
        max = y;
    }
    if (max > z)
    {

    }
    else
    {
        max = z;
    }
    return max;
}

int main()
{
    int a, b, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c && c == a)
    {
        printf("%d %d %d", a, b, c);
    }
    else
    {
        printf("%d ", Domax(a, b, c));
        printf("%d ", Domid(a, b, c));
        printf("%d", Domin(a, b, c));
    }
    return 0;
}