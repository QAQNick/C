#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void print_num(int value)
{
	int i = 0;
	printf("奇数序列为:");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d ", (value >> i) & 1);
	}
	printf("\n偶数序列为:");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (value >> i) & 1);
	}
	printf("\n");
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	print_num(num);
	return 0;
}