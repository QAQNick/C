#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"


void InitContact(Contact*p)
{
	assert(p);
	p->sz = 0;
	//memset(p->data, 0, sizeof(p->data));
	p->data = (PeoInfo *)malloc(3 * sizeof(PeoInfo));
	if (p->data == NULL)
	{
		perror("InitContact:malloc()");
		exit(EXIT_FAILURE);
	}
	p->capacity = 3;
}

void DistroyContact(Contact *p)
{
	assert(p);
	p->sz = 0;
	p->capacity = 0;
	free(p->data);
	p->data = NULL;
}

int CheckCapacity(Contact *p)
{
	assert(p);
	if (p->capacity == p->sz)
	{
		PeoInfo *pc = realloc(p->data, (p->capacity + 2) * sizeof(PeoInfo));
		if (pc != NULL)
		{
			p->data = pc;
			p->capacity += 2;
			printf("扩容成功\n");
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void AddContact(Contact *p)
{
	assert(p);

	/*if (p->sz == MAX)
	{
		printf("通讯录已满,无法添加!");
		return;
	}*/
	if (CheckCapacity(p) == 0)
	{
		printf("扩容失败，无法添加!\n");
		return;
	}

	printf("请输入姓名：");
	scanf("%s", &(p->data[p->sz].name));
	printf("请输入性别：");
	scanf("%s", &(p->data[p->sz].sex));
	printf("请输入年龄：");
	scanf("%s", &(p->data[p->sz].age));
	printf("请输入电话：");
	scanf("%s", &(p->data[p->sz].tele));
	printf("请输入住址：");
	scanf("%s", &(p->data[p->sz].addr));

	p->sz++;
	printf("添加成功!\n");
}

void ShowContact(Contact *p)
{
	assert(p);
	int i = 0;
	printf("%-10s\t%-5s\t%-5s\t%-12s\t%-15s\n", "姓名", "性别", "年龄", "电话", "住址");
	for (i = 0; i < p->sz; i++)
	{
		printf("%-10s\t%-5s\t%-5s\t%-12s\t%-15s\n", p->data[i].name, p->data[i].sex, 
									p->data[i].age, p->data[i].tele, p->data[i].addr);
	}
}

int FindByName(Contact *p)
{
	char name[NAME_MAX] = { 0 };
	int i = 0;
	printf("请输入你要进行操作对象的姓名:");
	scanf("%s", name);
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(name, p->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact *p)
{
	assert(p);
	int i = 0;
	int ret = 0;
	if (p->sz == 0)
	{
		printf("很遗憾，没有可删数据!\n");
		return;
	}
	ret = FindByName(p);
	if (ret == -1)
	{
		printf("你要删除的人不存在\n");
		return;
	}
	for (i = ret; i < p->sz; i++)
	{
		p->data[i] = p->data[i + 1];
	}
	p->sz--;
	printf("删除成功!\n");
}


void SearchContactByName(Contact *p)
{
	char name[NAME_MAX] = { 0 };
	printf("请输入姓名:");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(p->data[i].name, name) == 0)
		{
			printf("%-10s\t%-5s\t%-5s\t%-12s\t%-15s\n", "姓名", "性别", "年龄", "电话", "住址");
			printf("%-10s\t%-5s\t%-5s\t%-12s\t%-15s\n", p->data[i].name, p->data[i].sex,
				p->data[i].age, p->data[i].tele, p->data[i].addr);
			return;
		}
		else
		{
			printf("未找到该姓名的人的信息!\n");
			return;
		}
	}

}

void ModifyContact(Contact *p)
{
	assert(p);
	char name[NAME_MAX] = { 0 };
	char sex[SEX_MAX] = { 0 };
	char age[5] = { 0 };
	char tele[TELE_MAX] = { 0 };
	char addr[ADDR_MAX] = { 0 };
	int i = 0;
	int ret = 0;
	if (p->sz == 0)
	{
		printf("很抱歉，没有可修改的数据!\n");
	}
	ret = FindByName(p);
	if (ret == -1)
	{
		printf("你要修改的人不存在!\n");
		return;
	}
	else
	{
		printf("请输入修改后的姓名：");
		scanf("%s", &name);
		printf("请输入修改后的性别：");
		scanf("%s", &sex);
		printf("请输入修改后的年龄：");
		scanf("%s", &age);
		printf("请输入修改后的电话：");
		scanf("%s", &tele);
		printf("请输入修改后的住址：");
		scanf("%s", &addr);

		strcpy(p->data[i].name, name);
		strcpy(p->data[i].sex, sex);
		strcpy(p->data[i].age, age);
		strcpy(p->data[i].tele, tele);
		strcpy(p->data[i].addr, addr);

	}
	printf("修改成功!\n");
}


void SortContactByName(Contact *p)
{
	assert(p);
	int i = 0;
	int j = 0;
	if (p->sz == 0)
	{
		printf("没有数据，无法排序!\n");
		return;
	}
	for (i = 0; i < p->sz; i++)
	{
		for (j = 0; j < p->sz; j++)
		{
			if (strcmp(p->data[j].name, p->data[j + 1].name) > 0)
			{
				char temp[NAME_MAX] = { 0 };
				strcpy(temp, p->data[j].name);
				strcpy(p->data[j].name, p->data[j + 1].name);
				strcpy(p->data[j + 1].name, temp);
			}
		}
	}
	ShowContact(p);
}
