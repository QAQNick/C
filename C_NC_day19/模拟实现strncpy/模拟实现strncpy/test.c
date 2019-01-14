#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *my_strncpy(char *dest, const char* src, size_t count)
{
	char *ret = dest;
	assert(dest);
	assert(src);
	if (*src == '\0')
	{
		return dest;
	}
	while (count)
	{
		*dest++ = *src++;
		count--;
	}
	return ret;
}

int main()
{
	char str1[] = "Cats is my favourite animal";
	char str2[] = "Dogs";
	//strncpy(str1, str2, 4);
	my_strncpy(str1, str2, 4);
	printf("%s\n", str1);
	system("pause");
	return 0;
}
