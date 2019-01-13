#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void init(int arr[])
{
	int i = 0;
	printf("请输入5个数：");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("初始化后的数组为：");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n请再次选择：\n");
}

void empty(int arr[])
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		arr[i] = 0;
	}
	printf("清空后的数组为：");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n请再次选择：\n");
}

void reverse(int arr[])
{
	int i = 0;
	printf("数组逆置后为：");
	for (i = 4; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	printf("\n请再次选择：\n");
}

void menu()
{
	printf("*************************************\n");
	printf("********   1 . 初始化数组   *********\n");
	printf("********   2 .  清空数组    *********\n");
	printf("********   3 . 数组元素逆序 *********\n");
	printf("********   4 .   退出       *********\n");
	printf("*************************************\n");
}

int main()
{
	int arr[5] = { 0 };
	while (1)
	{
		int input = 0;
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			init(arr);
			break;
		case 2:
			empty(arr);
			break;
		case 3:
			reverse(arr);
			break;
		case 4:
			printf("退出程序！\n");
			return 0;
		default:
			printf("选择错误，请重新选择：\n");
			break;
		}
	}
	system("pause");
	return 0;
}