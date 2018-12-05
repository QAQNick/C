#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("****************************************\n");
	printf("**********    三子棋小游戏  ************\n");
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
		printf("玩家获胜！\n");
	}
	if (ret == 'X')
	{
		printf("电脑获胜！\n");
	}
	if (ret == 'Q')
	{
		printf("平局\n");
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
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}