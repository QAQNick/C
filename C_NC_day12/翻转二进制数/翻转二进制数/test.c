#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (value >> i & 1)
//		{
//			ret |= (value >> i & 1) << (31 - i);
//		}
//	}
//	return ret;
//}

unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	int sum = 0;
	int ret = 0;
	for (i = 0; i < 32; i++)
	{
		ret = ((value >> i) & 1) * (unsigned int)pow(2, 31 - i);
		sum += ret;
	}
	return sum;
}

int main()
{
	int n = 0;
	printf("请输入一个数:");
	scanf("%d", &n);
	int ret = reverse_bit(n);
	printf("%u\n", ret);
	system("pause");
	return 0;
}
