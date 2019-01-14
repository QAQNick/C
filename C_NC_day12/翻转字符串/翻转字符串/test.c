#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void reverse_all(char *start, char *end)
{
	assert(start);
	assert(end);
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

void reverse(char *str, int sz)
{
	assert(str);
	char *str1 = str;
	char *left = str;
	char *right = str + sz - 1;
	reverse_all(left, right);
	while (*str1)
	{
		left = str1;
		while ((*str1 != '\0') && (*str1 != ' '))
		{
			str1++;
		}
		right = str1 - 1;
		reverse_all(left, right);
		if (*str1 == ' ')
		{
			str1++;
		}
	}
}

int main()
{
	char arr[] = "student a am i";
	int len = strlen(arr);
	reverse(arr, len);
	printf("%s\n", arr);
	system("pause");
	return 0;
}
