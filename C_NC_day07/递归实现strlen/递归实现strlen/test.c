#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int my_strlen(char *string)
{
	int count = 0;
	if (*string != '\0')
	{
		string++;
		count = 1 + my_strlen(string);
	}
	return count;
}
int main()
{
	char string[20] = { 0 };
	printf("�������ַ���:");
	scanf("%s", string);
	printf("���ַ�������Ϊ:%d\n", my_strlen(string));
	system("pause");
	return 0;
}