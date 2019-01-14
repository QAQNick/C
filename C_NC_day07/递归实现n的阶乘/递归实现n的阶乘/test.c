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
	printf("请输入一个数:");
	scanf("%d", &n);
	printf("该数的阶乘为:%d\n", fac(n));
	system("pause");
	return 0;
}