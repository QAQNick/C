#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char letters = 0;
		printf("请输入大写或小写字母：");
		scanf("%c", &letters);
		if (letters >= 'a'&&letters <= 'z' || letters >= 'A'&&letters <= 'Z')
		{
			if (letters >= 'a'&&letters <= 'z')
			{
				printf("转化后的大写字母为：%c\n", letters - 32);
			}
			else if (letters >= 'A'&&letters <= 'Z')
			{
				printf("转化后的小写字母为：%c\n", letters + 32);
			}
		}

	system("pause");
	return 0;
}