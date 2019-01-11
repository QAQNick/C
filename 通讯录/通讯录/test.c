#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"


void menu()
{
	printf("*****************************************\n");
	printf("****           ͨѶ¼����            ****\n");
	printf("****       1. ���     2. ɾ��       ****\n");
	printf("****       3. ����     4. �޸�       ****\n");
	printf("****       5. ��ʾ     6. ���       ****\n");
	printf("****       7. ����     0. �˳�       ****\n");
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
	InitContact(&con);//��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��:");
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
			printf("�������������!\n");
			break;
		case SORT:
			SortContactByName(&con);
			break;
		case EXIT:
			SaveContact(&con);
			DistroyContact(&con);
			printf("�˳�����!");
			break;
		default:
			printf("ѡ��ʧ�ܣ�������ѡ��!");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}