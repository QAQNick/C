#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else if (n > 2)
	{
		return fib(n - 1) + fib(n - 2);
	}
}

int main()
{
	int input = 0;
	printf("请输入要求的第几个斐波那契数列元素：");
	scanf("%d", &input);
	int ret = fib(input);
	printf("第%d个斐波那契数列元素为：%d\n",input,ret);
	system("pause");
	return 0;
}