#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
}

void JudgeNumer(int arr[], int sz, int *num1, int *num2)
{
	int  temp = 0;
	for (int i = 0; i < sz; i += 2)
	{
		if (arr[i] == arr[i + 1])
			continue;
		else
		{
			if (temp == 0)
			{
				*num1 = arr[i];
				i = i + 1;
			}
			else if (temp == 1)
			{
				*num2 = arr[i];
				i = i + 1;
			}
			temp++;
		}
	}
}


int main()
{
	int arr[10] = { 1, 4, 5, 8, 9, 4, 8, 5, 7, 1 };
	sort(arr, 10);
	int num1 = 0;
	int num2 = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	JudgeNumer(arr, 10, &num1, &num2);
	printf("%d %d\n", num1, num2);
	system("pause");
	return 0;
}