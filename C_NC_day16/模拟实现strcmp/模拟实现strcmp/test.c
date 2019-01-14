#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int my_strcmp(const char *str1, const char *str2)
{
	int ret = 0;
	while (!(ret = *(unsigned char*)str1 - *(unsigned char*)str2) && *str2)
	{
		++str1;
		++str2;
	}
	if (ret < 0)
		ret = -1;
	else if (ret > 0)
		ret = 1;
	return ret;
}

int main()
{
	char str1[] = "abcdef";
	char str2[] = "abcdefg";
	printf("%d\n", my_strcmp(str1, str2));
	system("pause");
	return 0;
}
