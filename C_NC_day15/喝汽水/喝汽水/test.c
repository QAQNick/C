#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int SodaNumer(int money)
{
	int n = 1;//�»�����ˮƿ��
	int s = 0;//��һ�λ���֮��ʣ���
	int sum = money;//��ʼ���ܻ�ȡ����ΪǮ��
	while (n != 0)
	{
		n = money / 2;
		s = money % 2;
		money = n + s;
		sum = sum + n;
	}
	return sum;
}

int main()
{
	int money = 20;
	int ret = SodaNumer(20);
	printf("���Ի�� %d ƿ��ˮ\n", ret);
	system("pause");
	return 0;
}