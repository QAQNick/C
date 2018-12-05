#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("****************************************\n");
	printf("**********    ������С��Ϸ  ************\n");
	printf("**********     1 . play     ************\n");
	printf("**********     0 . exit     ************\n");
	printf("****************************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	int ret = 0;
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		ret = Check_Win(board, ROW, COL);
		if (ret != 'C')
			break;
		Displayboard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		ret = Check_Win(board, ROW, COL);
		if (ret != 'C')
			break;
		Displayboard(board, ROW, COL);

	}
	if (ret == '*')
	{
		printf("��һ�ʤ��\n");
	}
	if (ret == 'X')
	{
		printf("���Ի�ʤ��\n");
	}
	if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
	Displayboard(board, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}