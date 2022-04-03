#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main()
{
    char a = '0';
    scanf("%c", &a);
    int i, j = 0;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%c", a);
        }
        printf("\n");
    }
    return 0;
}

//int main()
//{
//    int a, b, c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("%d", b);
//    return 0;
//}
//int main()
//{
//    char a = '0';
//    scanf("%c", &a);
//    printf("%c", a);
//    return 0;
//}

//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    printf("%.3f", a);
//    return 0;
//}
//int main()
//{
//	char arr[] = { 'b','i','t'};
//	printf("%d\n", strlen(arr));
//	return 0;
//}