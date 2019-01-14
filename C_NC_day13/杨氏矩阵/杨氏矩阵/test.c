#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

int reseach_key(int arr[ROW][COL], int row, int col, int key)
{
	int i = 0;
	int j = col - 1;
	while ((j >= 0) && (i <= 2))
	{
		if (arr[i][j] == key)
		{
			return 1;
		}
		else if (arr[i][j] < key)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	return 0;
}


int main()
{
	int arr[ROW][COL] = {1,2,3,2,3,4,4,5,6};
	int key = 0;
	printf("请输入要查找的数:");
	scanf("%d", &key);
	int ret = reseach_key(arr, ROW, COL, key); 
	if (ret == 1)
	{
		printf("找到了!\n");
	}
	else
	{
		printf("未找到该数!\n");
	}
	system("pause");
	return 0;
}