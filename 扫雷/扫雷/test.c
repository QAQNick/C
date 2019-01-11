#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("***********************************\n");
	printf("*****       ɨ��С��Ϸ        *****\n");
	printf("*****        1 . play         *****\n");
	printf("*****        0 . exit         *****\n");
	printf("***********************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
	InitBoard(mine, ROWS, COLS, '0');//��ʼ������
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);//����
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
		printf("��ѡ��:");
		scanf("%d", &k);
		switch (k)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("ѡ��ʧ�ܣ�������ѡ��\n");
			break;
		}
	} while (k);
	system("pause");
	return 0;
}