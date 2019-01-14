#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int SodaNumer(int money)
{
	int n = 1;//新换的汽水瓶数
	int s = 0;//上一次换过之后剩余的
	int sum = money;//初始化总换取数量为钱数
	while (n != 0)
	{
		n = money / 2;
		s = money % 2;
		money = n + s;
		sum = sum + n;
	}
	return sum;
}

int main()
{
	int money = 20;
	int ret = SodaNumer(20);
	printf("可以获得 %d 瓶汽水\n", ret);
	system("pause");
	return 0;
}