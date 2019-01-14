#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *my_strcat(char *dest, const char *src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char *ret = dest;
	while (*dest)
	{
		dest++;
	}
	while ((*dest++ = *src++));
	return ret;
}

int main()
{
	char arr1[] = "hello ";
	char arr2[] = "bit";
	printf("%s\n", my_strcat(arr1, arr2));
	system("pause");
	return 0;
}