#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"


void menu()
{
	printf("*****************************************\n");
	printf("****           通讯录管理            ****\n");
	printf("****       1. 添加     2. 删除       ****\n");
	printf("****       3. 查找     4. 修改       ****\n");
	printf("****       5. 显示     6. 清空       ****\n");
	printf("****       7. 排序     0. 退出       ****\n");
	printf("*****************************************\n");
	printf("                                         \n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	EMPTY,
	SORT,
};

void test()
{
	int input = 0;
	Contact con;
	InitContact(&con);//初始化通讯录
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContactByName(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EMPTY:
			EmptyContact(&con);
			DistroyContact(&con);
			printf("已清除所有数据!\n");
			break;
		case SORT:
			SortContactByName(&con);
			break;
		case EXIT:
			SaveContact(&con);
			DistroyContact(&con);
			printf("退出程序!");
			break;
		default:
			printf("选择失败，请重新选择!");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}