#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int n = 0;//�����ϰ벿������
	int line = 0;//����������
	printf("������Ҫ��ӡ���ε�������(����)��");
	scanf("%d", &line);
	n = (line + 1) / 2;
	int i = 0;//��ǰ��
	int a = 0;//�հ���
	int b = 0;//' * '
	if (line <= 0 || line % 2 == 0)
	{
		printf("�޷���ӡ������\n");
	}
	else 
	{
		for (i = 1; i <= n; i++)//��ӡ�ϰ벿��
		{
			for (a = n - 1; a >= i; a--)
			{
				printf(" ");
			}
			for (b = 1; b <= 2 * i - 1; b++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = n - 1; i >= 1; i--)//��ӡ�°벿��
		{
			for (a = i; a <= n - 1; a++)
			{
				printf(" ");
			}
			for (b = 1; b <= 2 * i - 1; b++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}