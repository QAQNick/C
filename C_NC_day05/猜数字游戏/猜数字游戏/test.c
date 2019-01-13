#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*********************************************\n");
	printf("*********        1 . play      **************\n");
	printf("*********        0 . exit      **************\n");
	printf("*********************************************\n");
}

void game()
{
	int guss = 0;
	int ret = rand() % 100 + 1;

	while (1)
	{
		printf("请输入数字：");
		scanf("%d", &guss);
		if (guss < ret)
		{
			printf("你猜小了\n");
		}
		else if (guss > ret)
		{
			printf("你猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
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
			printf("选择错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}