#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value)
	{
		if (value % 2 == 1)
		{
			count++;
		}
		value = value / 2;
	}
	return count;
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	int ret = count_one_bits(num);
	printf("��������������1�ĸ���Ϊ: %d \n", ret);
	system("pause");
	return 0;
}