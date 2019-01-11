#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[1];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("10个数中最大的数为：%d\n", max);
	system("pause");
	return 0;
}