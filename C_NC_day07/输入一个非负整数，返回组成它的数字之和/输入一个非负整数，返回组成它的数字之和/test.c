#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int DigitSum(int n)
{
	int sum = 0;
	int m = 0;
	if (n != 0)
	{
		m = n % 10;
		n = n / 10;
		sum = m + DigitSum(n);
	}
	return sum;
}

int main()
{
	int n = 0;
	printf("������һ����:");
	scanf("%d", &n);
	printf("���ĸ�λ��֮��Ϊ:%d\n", DigitSum(n));
	system("pause");
	return 0;
}