#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//A说：不是我。 凶手 != A
//B说：是C。    凶手 == C 
//C说：是D。    凶手 == D 
//D说：C在胡说  凶手 != D
//已知3个人说了真话，1个人说的是假话
int main()
{
	int killer = 0;
	for (killer = 1; killer <= 4; killer++)
	{
		if (((killer != 1) + (killer == 3) + (killer == 4) + (killer != 4)) == 3)
		{
			printf("凶手是%c\n", killer + 64);
		}
	}
	system("pause");
	return 0;
}