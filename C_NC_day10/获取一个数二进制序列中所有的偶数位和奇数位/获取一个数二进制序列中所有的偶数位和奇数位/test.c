#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void print_num(int value)
{
	int i = 0;
	printf("��������Ϊ:");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d ", (value >> i) & 1);
	}
	printf("\nż������Ϊ:");
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