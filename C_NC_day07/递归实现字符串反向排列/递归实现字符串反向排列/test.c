#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

void reverse_string(char * string)
{
	if ('\0' != *(++string))
		reverse_string(string);
	printf("%c", *(string - 1));
}
int main()
{
	char string[20] = {0};
	printf("请输入一串字符串:");
	scanf("%s", string);
	printf("反向排列后的字符串为:");
	reverse_string(string);
	printf("\n");
	system("pause");
	return 0;
}