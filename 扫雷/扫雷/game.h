#ifndef __GAME_H__
#define __GAME_H__


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EASY_COUNT 10//À×µÄ¸öÊý

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void SetMine(char mine[ROWS][COLS], int row, int col);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void OpenBlock(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y);
int IsWin(char show[ROWS][COLS], int row, int col);


#endif __GAME_H__