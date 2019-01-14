#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		int i = 0;
		for (i = 0; i <= n - 2; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}

int main()
{
	int input = 0;
	printf("请输入要求的第几个斐波那契数列元素：");
	scanf("%d", &input);
	int ret = fib(input);
	printf("第%d个斐波那契数列元素为：%d\n", input, ret);
	system("pause");
	return 0;
}