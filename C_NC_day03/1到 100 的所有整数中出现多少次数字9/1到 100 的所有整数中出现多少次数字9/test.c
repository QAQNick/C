#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 100; i++)
	{
		if (i % 10 == 9)//��λ����9�Ĵ���
		{
			count++;
		}
		else if (i / 10 == 9)//ʮλ����9�Ĵ���
		{
			count++;
		}
	}
	printf("1�� 100 �����������г�������9: %d ��\n", count);
	system("pause");
	return 0;
}
