#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int M, N;//���������� M��N
	int i;//��һ��forѭ����ѭ���������Ƚ�M����i����forѭ���������M��N����
	int count = 0;//������������ͳ�������ĸ���
	int j;//�ڶ���forѭ���е�ѭ������
	scanf("%d %d", &M, &N);
	//��һ��forѭ���������M��N����
	for ( i = M; i <= N; i++)
	{
		int prime = 1;//ע��primeҪ�����ﶨ�壬�����ڵڶ���for���涨��
					  //�ж�һ�����Ƿ���������ֻ��Ҫ��һ��prime��
		//�ڶ���forѭ����������
		//��i�ܷ񱻴�2 �� i-1 �е�������
		//����ܱ���������������������Ҫ��ȥ����������ˣ�����ֱ����break�����ڶ���forѭ��
		//������������������+1��
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)//�������0��˵������������������
			{
				prime = 0;
				break;
			}
			//  else
			//	count++;ע�⣬�����Ǵ���� ��Ϊ�����һ��������������0
			//ֱ�Ӹ�else�Ļ������滹��һЩ��û��ȥ�������ܺ����е���������
		}
		if (prime)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}

#include<stdio.h>

int countdigit(int x)//��������2�ĸ���
{
	int a = 0;//����һ����ʱ�ı��������2
	int count = 0;//������

	while (x != 0)
	{
		a = x % 10;//ȡ��λ�ϵ�����
		x = x / 10;//ȥ���Ѿ�ȡ���ĸ�λ����ԭ����λǰ����Ƶ���λ��
		if (a == 2)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n = 0;//�������
	int i = 0;//ѭ������
	int sum = 0;
	scanf("%d", &n);

	for ( i = 1; i <= n; i++)
	{
		sum += countdigit(i);
	}
	printf("%d\n", sum);
	return 0;
}
