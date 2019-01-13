#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	//设置密码为：6699233
	char password[20] = {0};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", password);
		if (strcmp(password, "6699233") == 0)
		{
			printf("登录成功!\n");
			break;
		}
		else
		{
			printf("密码输入错误!\n");
		}
	}
	if (i == 3)
	{
		printf("密码错误输入三次，退出程序!\n");
	}
	system("pause");
	return 0;
}