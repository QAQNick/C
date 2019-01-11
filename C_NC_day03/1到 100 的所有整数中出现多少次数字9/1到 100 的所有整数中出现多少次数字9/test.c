#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 100; i++)
	{
		if (i % 10 == 9)//个位数是9的次数
		{
			count++;
		}
		else if (i / 10 == 9)//十位数是9的次数
		{
			count++;
		}
	}
	printf("1到 100 的所有整数中出现数字9: %d 次\n", count);
	system("pause");
	return 0;
}
