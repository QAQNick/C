#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int i = 0;
	printf("输入第一个数组的内容：");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("输入第二个数组的内容：");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	printf("交换后第一个数组的内容：");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("交换后第二个数组的内容：");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}