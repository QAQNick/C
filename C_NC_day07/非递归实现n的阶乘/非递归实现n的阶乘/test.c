#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int fac(int n)
{
	int i = 0;
	int ret = 1;
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		for (i = 2; i <= n; i++)
		{
			ret = ret * i;
		}
		return ret;
	}
}

int main()
{
	int n = 0;
	printf("������һ����:");
	scanf("%d", &n);
	printf("�����Ľ׳�Ϊ:%d\n", fac(n));
	system("pause");
	return 0;
}