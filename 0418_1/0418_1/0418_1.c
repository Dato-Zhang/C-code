#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>

int main()
{
	int x = 0;

	for ( x = 0; x < 100000; x++)
	{
		//�ҳ�0-100000��ˮ�ɻ���
		//1.�ȼ���x��λ��n��x�м�λ��n��
		int n = 1;//һ����������һλ��
		int tmp = x;
		int sum = 0;

		while (tmp / 10 != 0)
		{
			tmp = tmp / 10;
			n++;
		}
		//2.����ÿһλ����n��֮��sum
		tmp = x;
		while (tmp)
		{
			sum = sum + pow(tmp % 10, n);
			tmp = tmp / 10;
		}
		//3.��sum�����������Ƚ�
		if (sum == x)
		{
			printf("%d ", x);
		}
	}
	return 0;
}
//int main()
//{
//    int a, b, c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("%-9d %-9d %-9d\n", a, a * a, a * a * a);
//    printf("%-9d %-9d %-9d\n", b, b * b, b * b * b);
//    printf("%-9d %-9d %-9d\n", c, c * c, c * c * c);
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d %d %d\n", a % 10, (a % 100) / 10, a / 100);
//    return 0;
//}
//int Sum(int a, int n)
//{
//	int ret = 0;
//	int sum = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a, n = 0;
//	scanf("%d%d", &a, &n);
//	printf("%d\n", Sum(a, n));
//	return 0;
//}

//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	char tmp = 0;
//
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);
//	printf("����ǰ��%s\n", arr);
//	//�����ַ���
//	reverse(arr);
//
//	printf("�����%s", arr);
//	return 0;
//}