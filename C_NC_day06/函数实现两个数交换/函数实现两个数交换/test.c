#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void number_change(int num1, int num2)
{
	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("交换后的数字:");
	printf("%d %d\n", num1, num2);
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("请输入两个数:");
	scanf("%d %d", &num1, &num2);
	number_change(num1, num2);
	system("pause");
	return 0;
}