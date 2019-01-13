#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char ch;
	scanf("%c", &ch);
	if (ch >= '0' && ch <= '9')
	{
		int b = 0;
		b = (int)ch;
		printf("%d\n",b);
	}
	if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
	{
		printf("%d\n", (int)ch);
	}
	system("pause");
	return 0;
}