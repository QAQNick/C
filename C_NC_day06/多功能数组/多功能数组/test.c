#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void init(int arr[])
{
	int i = 0;
	printf("������5������");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("��ʼ���������Ϊ��");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n���ٴ�ѡ��\n");
}

void empty(int arr[])
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		arr[i] = 0;
	}
	printf("��պ������Ϊ��");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n���ٴ�ѡ��\n");
}

void reverse(int arr[])
{
	int i = 0;
	printf("�������ú�Ϊ��");
	for (i = 4; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	printf("\n���ٴ�ѡ��\n");
}

void menu()
{
	printf("*************************************\n");
	printf("********   1 . ��ʼ������   *********\n");
	printf("********   2 .  �������    *********\n");
	printf("********   3 . ����Ԫ������ *********\n");
	printf("********   4 .   �˳�       *********\n");
	printf("*************************************\n");
}

int main()
{
	int arr[5] = { 0 };
	while (1)
	{
		int input = 0;
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			init(arr);
			break;
		case 2:
			empty(arr);
			break;
		case 3:
			reverse(arr);
			break;
		case 4:
			printf("�˳�����\n");
			return 0;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}
	system("pause");
	return 0;
}