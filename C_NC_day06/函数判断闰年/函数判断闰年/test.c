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
	printf("������Ҫ�жϵ���ݣ�");
	scanf("%d", &year);
	int ret = leap_year(year);
	if (ret == -1)
	{
		printf("��һ�겻�����꣡\n");
	}
	else
	{
		printf("��һ�������꣡\n");
	}
	system("pause");
	return 0;
}