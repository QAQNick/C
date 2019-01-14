#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int compare(int value1, int value2)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((value1 >> i) & 1) != ((value2 >> i) & 1))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int ret = compare(num1, num2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}