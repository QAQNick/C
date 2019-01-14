#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void print_num(int value)
{
	if (value > 9)
	{
		print_num(value / 10);
	}
	printf("%d ", value % 10);
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	print_num(num);
	system("pause");
	return 0;
}