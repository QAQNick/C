#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("***********************************\n");
	printf("*****       扫雷小游戏        *****\n");
	printf("*****        1 . play         *****\n");
	printf("*****        0 . exit         *****\n");
	printf("***********************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	InitBoard(mine, ROWS, COLS, '0');//初始化棋盘
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);//埋雷
	DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int k = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &k);
		switch (k)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择失败，请重新选择！\n");
			break;
		}
	} while (k);
	system("pause");
	return 0;
}