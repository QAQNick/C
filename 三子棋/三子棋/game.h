#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


#define ROW 3
#define COL 3

void Initboard(char board[ROW][COL], int row, int col);//��ʼ������
void Displayboard(char board[ROW][ROW], int row, int col);//��ӡ����
void PlayerMove(char board[ROW][COL], int row, int col);//�������
void ComputerMove(char board[ROW][COL], int row, int col);//��������
int Check_Win(char board[ROW][COL], int row, int col);//�ж���Ӯ