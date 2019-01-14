#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[] = { 1,1,2,2,5,6,6,8,8 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < len; i++)
	{
		arr[0] = arr[0] ^ arr[i];
	}
	printf("%d\n", arr[0]);
	system("pause");
	return 0;
}