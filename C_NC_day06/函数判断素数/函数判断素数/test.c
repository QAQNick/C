#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

int prime_number(int num)
{
	int i = 0;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			return -1;
	}
	if (i > sqrt(num))
		return 1;
	
}
int main()
{
	int num = 0;
	printf("请输入要判断的数：");
	scanf("%d", &num);
	int ret = prime_number(num);
	if (ret == -1)
	{
		printf("这个数不是素数！\n");
	}
	else
	{
		printf("这个数是素数！\n");
	}
	system("pause");
	return 0;
}

