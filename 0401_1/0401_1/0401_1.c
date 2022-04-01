#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch = "avde";
	printf("\a"); 
	return 0;
}

int main()
{
    int x, y = 0;
    scanf("%d", &x);
    if (x < 0)
    {
        y = 1;
    }
    else if (x == 0)
    {
        y = 0;
    }
    else
    {
        y = -1;
    }
    printf("%d", y);
    return 0;
}

int main()
{
	int a, b = 0;
	int max = 0;
	scanf("%d %d", &a, &b);
	if (a >= b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	printf("%d", max);
	return 0;
}
enum Color
{
	枚举常量
	RED,
	GREEN,
	BLUE
};

int main()
{
	三原色
	RED GREEN BLUE
	enum Color c = 1;

	return 0;
}



int	main()
{
	int	y, m, d = 1;
	scanf("%d %d %d", &y, &m, &d);
	int sum = 0;
	int b = 0;

	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
	{
		b = 1;
	}
	else
	{
		b = 0;
	}

	for (int i = 1; i < m; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			sum = sum + 31;
		}
		else if (b == 1 && i == 2)
		{
			sum = sum + 29;
		}
		else if (b == 0 && i == 2)
		{
			sum = sum + 28;
		}
		else
		{
			sum = sum + 30;
		}
	}
	sum = sum + d;
	printf("%d", sum);

	return 0;
}




int main()
{
    int a = 40;
    int c = 212;
    printf("%d", (-8 + 22) * a - 10 + c / 2);
    return 0;
}
 
int main()
{
	char Name[] = "Jack";
	int Age = 18;
	char Gender[] = "man";
	printf("Name    Age    Gender\n");
	printf("---------------------\n");
	printf("%s    %d     %s\n", Name, Age, Gender);
	return 0;
 }
int main()
{
	int i, j, k, l = 0;

	for (i = 0; i < 2; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			printf(" ");
		}

		for ( k = 0; k < 2; k++)
		{
			printf("*");
		}

		for (l = 0; l < 5; l++)
		{
			printf(" ");
		}
		printf("\n");
	}
	for ( i = 0; i < 2; i++)
	{
		for (j = 0; j < 12; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for ( i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2; k++)
		{
			printf("*  ");
		}
		for (l = 0; l < 2; l++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
