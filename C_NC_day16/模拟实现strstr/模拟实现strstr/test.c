#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *my_strstr(const char *str1, const char *str2)
{
	assert(str1);
	assert(str2);
	char *cp = (char*)str1;
	char *substr = (char*)str2;
	char *s1 = (char*)str1;
	while (*cp)
	{
		s1 = cp;
		while (*s1 && *substr && (*s1 == *substr))
		{
			s1++;
			substr++;
		}
		if (*substr == '\0')
			return cp;
		substr = (char*)str2;
		cp++;
	}
	return NULL;
}

int main()
{
	char str1[] = "i am a student";
	char str2[] = "student";
	printf("%s\n", my_strstr(str1, str2));
	system("pause");
	return 0;
}