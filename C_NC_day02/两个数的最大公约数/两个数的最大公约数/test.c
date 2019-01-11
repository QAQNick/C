#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		int t = 0;
		t = a;
		a = b;
		b = t;
	}
	int i = 0;
	for (i = a; i > 0; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			printf("两个数的最大公约数为：%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}