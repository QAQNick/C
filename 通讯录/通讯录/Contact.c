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
			printf("���ݳɹ�\n");
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
		printf("ͨѶ¼����,�޷����!");
		return;
	}*/
	if (CheckCapacity(p) == 0)
	{
		printf("����ʧ�ܣ��޷����!\n");
		return;
	}

	printf("������������");
	scanf("%s", &(p->data[p->sz].name));
	printf("�������Ա�");
	scanf("%s", &(p->data[p->sz].sex));
	printf("���������䣺");
	scanf("%s", &(p->data[p->sz].age));
	printf("������绰��");
	scanf("%s", &(p->data[p->sz].tele));
	printf("������סַ��");
	scanf("%s", &(p->data[p->sz].addr));

	p->sz++;
	printf("��ӳɹ�!\n");
}

void ShowContact(Contact *p)
{
	assert(p);
	int i = 0;
	printf("%-10s\t%-5s\t%-5s\t%-12s\t%-15s\n", "����", "�Ա�", "����", "�绰", "סַ");
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
	printf("��������Ҫ���в������������:");
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
		printf("���ź���û�п�ɾ����!\n");
		return;
	}
	ret = FindByName(p);
	if (ret == -1)
	{
		printf("��Ҫɾ�����˲�����\n");
		return;
	}
	for (i = ret; i < p->sz; i++)
	{
		p->data[i] = p->data[i + 1];
	}
	p->sz--;
	printf("ɾ���ɹ�!\n");
}


void SearchContactByName(Contact *p)
{
	char name[NAME_MAX] = { 0 };
	printf("����������:");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(p->data[i].name, name) == 0)
		{
			printf("%-10s\t%-5s\t%-5s\t%-12s\t%-15s\n", "����", "�Ա�", "����", "�绰", "סַ");
			printf("%-10s\t%-5s\t%-5s\t%-12s\t%-15s\n", p->data[i].name, p->data[i].sex,
				p->data[i].age, p->data[i].tele, p->data[i].addr);
			return;
		}
		else
		{
			printf("δ�ҵ����������˵���Ϣ!\n");
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
		printf("�ܱ�Ǹ��û�п��޸ĵ�����!\n");
	}
	ret = FindByName(p);
	if (ret == -1)
	{
		printf("��Ҫ�޸ĵ��˲�����!\n");
		return;
	}
	else
	{
		printf("�������޸ĺ��������");
		scanf("%s", &name);
		printf("�������޸ĺ���Ա�");
		scanf("%s", &sex);
		printf("�������޸ĺ�����䣺");
		scanf("%s", &age);
		printf("�������޸ĺ�ĵ绰��");
		scanf("%s", &tele);
		printf("�������޸ĺ��סַ��");
		scanf("%s", &addr);

		strcpy(p->data[i].name, name);
		strcpy(p->data[i].sex, sex);
		strcpy(p->data[i].age, age);
		strcpy(p->data[i].tele, tele);
		strcpy(p->data[i].addr, addr);

	}
	printf("�޸ĳɹ�!\n");
}


void SortContactByName(Contact *p)
{
	assert(p);
	int i = 0;
	int j = 0;
	if (p->sz == 0)
	{
		printf("û�����ݣ��޷�����!\n");
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
