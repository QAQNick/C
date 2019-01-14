#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int Judge(char *s1, char *s2)
{
	assert(s1);
	assert(s2);
	int i = 0;
	int j = 0;
	int len = strlen(s1);
	for (i = 1; i <= len; i++)
	{
		int temp = s1[0];
		for (j = 0; j < len - 1; j++)
		{
			s1[j] = s1[j + 1];
		}
		s1[len - 1] = temp;

		if (strcmp(s1, s2) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char s1[] = { 0 };
	printf("请输入第一个字符串:");
	scanf("%s", s1);
	char s2[] = { 0 };
	printf("请输入第二个字符串:");
	scanf("%s", s2);
	printf("%s\n%s\n", s1, s2);
	int ret = Judge(s1, s2);
	if (ret == 1)
		printf("是翻转后的字符串\n");
	else if(ret == 0)
		printf("不是翻转后的字符串\n");
	system("pause");
	return 0;
}