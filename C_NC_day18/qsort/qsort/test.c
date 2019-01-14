#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
	char name[20];
	int age;
}student;

void swap(char *buf1, char *buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}

void bubblesort(void *base, int sz, int width, int(*cmp)(const void *e1, const void *e2))
{
	int i = 0;//ÌËÊý
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}

void print_arr_int(int arr1[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}

void print_s_char(student* s, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d \t", s[i].name, s[i].age);
	}
	printf("\n");
	
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int *)e1 - *(int *)e2;
}

int cmp_s_by_name(const void *e1, const void *e2)
{
	return strcmp(((struct student *)e1)->name, ((struct student *)e2)->name);
}

int cmp_s_by_age(const void *e1, const void *e2)
{
	return (((struct student *)e1)->age - ((struct student *)e2)->age);
}

void test1()
{
	int arr1[10] = { 1,3,5,7,9,2,4,6,8,0 };
	print_arr_int(arr1, 10);
	//qsort(arr1, 10, sizeof(arr1[0]), cmp_int);
	bubblesort(arr1, 10, sizeof(arr1[0]), cmp_int);
	print_arr_int(arr1, 10);
	printf("\n");
}

void test2_name()
{
	student stu[3] = { {"zhangsan", 20},{"lisi", 26},{"wangwu", 19} };
	print_s_char(stu, 3);
	//qsort(stu, 3, sizeof(stu[0]), cmp_s_by_name);
	bubblesort(stu, 3, sizeof(stu[0]), cmp_s_by_name);
	print_s_char(stu, 3);
	printf("\n");
}

void test2_age()
{
	student stu[3] = { {"zhangsan", 20},{"lisi", 26},{"wangwu", 19} };
	print_s_char(stu, 3);
	//qsort(stu, 3, sizeof(stu[0]), cmp_s_by_age);
	bubblesort(stu, 3, sizeof(stu[0]), cmp_s_by_age);
	print_s_char(stu, 3);
	printf("\n");
}

int main()
{
	test1();
	test2_name();
	test2_age();
	system("pause");
	return 0;
}