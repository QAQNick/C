#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1


int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i][0] = arr[i][i] =1;
	}
	for (i = 2; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-3d ", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}