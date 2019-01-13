#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 0;
	int num = 0;
	int Sn = 0;
	int i = 0;
	scanf("%d", &num);
	for (i = 0; i < 5; i++)
	{
		a = a * 10 + num;
		Sn = Sn + a;
	}
	printf("%d\n", Sn);
	system("pause");
	return 0;
}