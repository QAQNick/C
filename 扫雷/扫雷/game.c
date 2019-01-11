#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("--------------------------------\n");
	for (i = 0; i <=col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------------------------------\n");
}


int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

int IsWin(char show[ROWS][COLS], int row, int col)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
			{
				count++;
			}
		}
	}
	return count;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int k = 0;
	int l = 0;
	while (IsWin(show, row, col) > EASY_COUNT && IsWin(show, row, col) <= row * col)
	{

		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (IsWin(show, row, col) == row * col)//保证第一次不被雷炸死
			{
				if (mine[x][y] == '1')
				{
					mine[x][y] = '0';
					while (1)
					{
						k = rand() % row + 1;
						l = rand() % col + 1;
						if (mine[k][l] == '0')
						{
							mine[k][l] = '1';
							break;
						}
					}
				}
			}
			if (mine[x][y] == '1')
			{
				printf("很遗憾,你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				OpenBlock(mine, show, row, col, x, y);
				DisplayBoard(mine, row, col);
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("坐标非法, 请重新输入!\n");
		}
	}
	if (IsWin(show, row, col) == EASY_COUNT)//判断排雷成功
	{
		printf("排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}

void OpenBlock(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y)//周围无雷打开一片
{
	int ret = 0;
	ret = GetMineCount(mine, x, y);
	if (ret == 0)
	{
		show[x][y] = ' ';
		if (x - 1 > 0 && y > 0 && show[x - 1][y] == '*')
			OpenBlock(mine, show, row, col, x - 1, y);
		if (x - 1 > 0 && y + 1 <= col && show[x - 1][y + 1] == '*')
			OpenBlock(mine, show, row, col, x - 1, y + 1);
		if (x > 0 && y + 1 <= col && show[x][y + 1] == '*')
			OpenBlock(mine, show, row, col, x, y + 1);
		if (x + 1 <= row && y + 1 <= col && show[x + 1][y + 1] == '*')
			OpenBlock(mine, show, row, col, x + 1, y + 1);
		if (x + 1 <= row && y > 0 && show[x + 1][y] == '*')
			OpenBlock(mine, show, row, col, x + 1, y);
		if (x + 1 <= row && y - 1 > 0 && show[x + 1][y - 1] == '*')
			OpenBlock(mine, show, row, col, x + 1, y - 1);
		if (x > 0 && y - 1 > 0 && show[x][y - 1] == '*')
			OpenBlock(mine, show, row, col, x, y - 1);
		if (x - 1 > 0 && y - 1 > 0 && show[x - 1][y - 1] == '*')
			OpenBlock(mine, show, row, col, x - 1, y - 1);
	}
	else
	{
		show[x][y] = GetMineCount(mine, x, y) + '0';
	}
}