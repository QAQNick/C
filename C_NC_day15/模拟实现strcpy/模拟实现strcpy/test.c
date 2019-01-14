#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *my_strcpy(char *dest, const char* src)
{
	char *ret = dest;
	assert(dest);
	assert(src);
	while ((*dest++ = *src++));
	return ret;
}

int main()
{
	char arr1[7] = "abcdef";
	char arr2[20] = "hello";
	printf("%s\n", my_strcpy(arr2, arr1));
	system("pause");
	return 0;
}