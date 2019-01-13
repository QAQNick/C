#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

leap_year(int year)
{
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
		return 1;
	else
		return -1;
}
int main()
{
	int year = 0;
	printf("请输入要判断的年份：");
	scanf("%d", &year);
	int ret = leap_year(year);
	if (ret == -1)
	{
		printf("这一年不是闰年！\n");
	}
	else
	{
		printf("这一年是闰年！\n");
	}
	system("pause");
	return 0;
}