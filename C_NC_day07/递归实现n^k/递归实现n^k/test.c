#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int power(int n, int i)
{
	if (i == 0)
	{
		return 0;
	}
	else if (i == 1)
	{
		return n;
	}
	else
	{
		return n * power(n, i - 1);
	}
}

int main()
{
	int n = 0;
	int i = 0;
	printf("���������:");
	scanf("%d", &n);
	printf("������ָ��:");
	scanf("%d", &i);
	int ret = power(n, i);
	printf("%d��%d�η����Ϊ:%d\n", n, i,ret);
	system("pause");
	return 0;
}