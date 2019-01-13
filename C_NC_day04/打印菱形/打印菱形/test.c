#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int n = 0;//定义上半部分行数
	int line = 0;//定义总行数
	printf("请输入要打印菱形的总行数(奇数)：");
	scanf("%d", &line);
	n = (line + 1) / 2;
	int i = 0;//当前行
	int a = 0;//空白列
	int b = 0;//' * '
	if (line <= 0 || line % 2 == 0)
	{
		printf("无法打印出菱形\n");
	}
	else 
	{
		for (i = 1; i <= n; i++)//打印上半部分
		{
			for (a = n - 1; a >= i; a--)
			{
				printf(" ");
			}
			for (b = 1; b <= 2 * i - 1; b++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = n - 1; i >= 1; i--)//打印下半部分
		{
			for (a = i; a <= n - 1; a++)
			{
				printf(" ");
			}
			for (b = 1; b <= 2 * i - 1; b++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}