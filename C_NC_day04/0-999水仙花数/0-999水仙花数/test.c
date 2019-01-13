#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int units = 0;//定义个位数
	int tens = 0;//定义十位数
	int hundreds = 0;//定义百位数
	int i = 0;
	for (i = 100; i <= 999; i++)
	{
		units = i % 10;
		tens = i / 10 % 10;
		hundreds = i / 100;
		if (i == units * units * units + tens * tens * tens + hundreds * hundreds * hundreds)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}