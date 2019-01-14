#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int my_strncmp(const char *dest, const char *src, size_t count)
{
	assert(dest);
	assert(src);
	while (count && (*dest == *src))
	{
		if (*dest == '\0')
		{
			return 0;
		}
		dest++;
		src++;
		count--;
	}
	return *dest - *src;
}

int main()
{
	char str1[] = "abcdef";
	char str2[] = "abdcfe";
	//int ret = strncmp(str1, str2, 3);
	int ret = my_strncmp(str1, str2, 3);
	printf("%d\n", ret);
	system("pause");
	return 0;
}