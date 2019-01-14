#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int my_strlen(char *string)
{
	int count = 0;
	while(*string++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char string[20] = { 0 };
	printf("请输入字符串:");
	scanf("%s", string);
	printf("该字符串长度为:%d\n", my_strlen(string));
	system("pause");
	return 0;
}