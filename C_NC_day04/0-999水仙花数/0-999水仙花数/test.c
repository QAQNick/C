#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int units = 0;//�����λ��
	int tens = 0;//����ʮλ��
	int hundreds = 0;//�����λ��
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