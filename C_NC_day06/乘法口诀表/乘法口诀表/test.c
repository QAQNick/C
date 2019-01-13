#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void Multiplication(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%-2d * %-2d = %-3d  ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	printf("请输入你要打印的乘法口诀表的行数：");
	scanf("%d", &n);
	Multiplication(n);
	system("pause");
	return 0;
}