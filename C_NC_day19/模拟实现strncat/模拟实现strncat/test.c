#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *my_strncat(char *dest, char *src, size_t count)
{
	char *ret = dest;
	assert(dest);
	assert(src);
	if (*src == '\0')
	{
		return dest;
	}
	while (*dest)
	{
		dest++;
	}
	while (count)
	{
		*dest++ = *src++;
		count--;
	}
	*dest = '\0';
	return ret;
}

int main()
{
	char str1[10] = "hello ";
	char str2[10] = "bit";
	//strncat(str1, str2, 3);
	my_strncat(str1, str2, 3);
	printf("%s\n", str1);
	system("pause");
	return 0;
}

