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
	printf("������Ҫ��ĵڼ���쳲���������Ԫ�أ�");
	scanf("%d", &input);
	int ret = fib(input);
	printf("��%d��쳲���������Ԫ��Ϊ��%d\n", input, ret);
	system("pause");
	return 0;
}