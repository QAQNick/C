#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *my_strchr(const char *src, char dest)
{
	assert(src);
	while (src != NULL)
	{
		if (*src == dest)
		{
			return (char*)src;
		}
		src++;
	}
	return NULL;
}

int main()
{
	char str1[] = "hello";
	char str2 = 'l';
	printf("%s\n", my_strchr(str1, str2));
	system("pause");
	return 0;
}