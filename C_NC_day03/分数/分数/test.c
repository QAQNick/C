#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	double sum1 = 0.0;
	double sum2 = 0.0;
	double sum = 0.0;
	for (i = 1; i < 100; i += 2)
	{
		sum1 += 1.0/ i;
	}
	for (j = 2; j <= 100; j += 2)
	{
		sum2 += 1.0/ j;
	}
	sum = sum1 - sum2;
	printf("1/1-1/2+1/3-1/4+1/5 бнбн + 1/99 - 1/100: %f\n", sum);
	system("pause");
	return 0;
}