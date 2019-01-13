#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int Number_search(int arr[], int key, int left, int right)
{
	while (left <= right)
	{
		int mid = left + (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 0;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	printf("请输入你要查找的元素:");
	scanf("%d", &key);
	int ret = Number_search(arr,key, left, right);
	if (ret == -1)
	{
		printf("找不到!\n");
	}
	else
	{
		printf("找到了，下标为：%d\n", ret);
	}
	system("pause");
	return 0;
}