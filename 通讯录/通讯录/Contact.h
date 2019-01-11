#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <stdio.h>
#include <stdlib.h>
#include <assert.h> 
#include <string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 25

#define MAX 1000

typedef struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	char age[5];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

//��̬�ڴ�汾
//typedef struct Contact
//{
//	PeoInfo data[MAX];//�����Ϣ
//	int sz;//��ǰ������Ϣ��
//}Contact, *pContact;


//��̬�ڴ�汾
typedef struct Contact
{
	PeoInfo *data;//ָ��̬���ٵ��ڴ�ռ�
	int sz;//��ǰ��Ϣ��
	int capacity;//����
}Contact;

void InitContact(Contact *p);//��ʼ��ͨѶ¼
void DistroyContact(Contact *p);
void AddContact(Contact *p);
void ShowContact(Contact *p);
void DelContact(Contact *p);
int CheckCapacity(Contact *p);
void SearchContactByName(Contact *p);
void ModifyContact(Contact *p);
void SortContactByName(Contact *p);
void SaveContact(Contact *p);
void LoadContact(Contact *p);
void EmptyContact(Contact *p);









#endif //__CONTACT_H__

