#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void move(char *arr, int sz)
{
	int i = 0;
	char temp = arr[0];
	for (i = 0; i < sz - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[i] = temp;
	sz--;
}

char leftmove(char *arr, int sz, int k)
{
	assert(arr);
	k %= sz;
	while (k--)
	{
		move(arr, sz);
	}
}


int main()
{
	char arr[] = "ABCDEFG";
	printf("%s\n", arr);
	int k = 0;
	printf("ÇëÊäÈëÒª×óÐý×Ö·û¸öÊý:");
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	leftmove(arr, sz, k);
	printf("×óÐýºóµÄ×Ö·û´®Îª:\n%s\n", arr);
	system("pause");
	return 0;
}