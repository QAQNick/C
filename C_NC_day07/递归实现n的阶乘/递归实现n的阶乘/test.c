#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * fac(n - 1);
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