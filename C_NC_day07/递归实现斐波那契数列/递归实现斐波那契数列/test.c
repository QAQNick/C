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
	printf("������Ҫ��ĵڼ���쳲���������Ԫ�أ�");
	scanf("%d", &input);
	int ret = fib(input);
	printf("��%d��쳲���������Ԫ��Ϊ��%d\n",input,ret);
	system("pause");
	return 0;
}