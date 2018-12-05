#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void Initboard(char board[ROW][COL], int row, int col)//初始化棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Displayboard(char board[ROW][ROW], int row, int col)//打印棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			//  * | * | * |
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			//---|---|---|
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
				
			}
			printf("\n");
		}

	}
}

void PlayerMove(char board[ROW][COL], int row, int col)//玩家下棋
{
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	
	while (1)
	{
		printf("请输入坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row || y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已被占用，请重新输入！\n");
			}
		} 
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)//电脑下棋
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'X';
			break;
		}
	}
}

int Is_Full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

int  Check_Win(char board[ROW][COL], int row, int col)//判断输赢
{
	int i = 0;
	for (i = 0; i < row; i++)//判断行是否相同
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}

	for (i = 0; i < col; i++)//判断列是否相同
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')//判断主对角线是否相同
	{
		return board[0][0];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')//判断副对角线是否相同
	{
		return board[0][2];
	}

	if (Is_Full(board,ROW,COL))//判断平局
	{
		return 'Q';
	}

	return 'C';//继续

}
