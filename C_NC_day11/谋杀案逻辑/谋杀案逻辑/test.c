#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//A˵�������ҡ� ���� != A
//B˵����C��    ���� == C 
//C˵����D��    ���� == D 
//D˵��C�ں�˵  ���� != D
//��֪3����˵���滰��1����˵���Ǽٻ�
int main()
{
	int killer = 0;
	for (killer = 1; killer <= 4; killer++)
	{
		if (((killer != 1) + (killer == 3) + (killer == 4) + (killer != 4)) == 3)
		{
			printf("������%c\n", killer + 64);
		}
	}
	system("pause");
	return 0;
}