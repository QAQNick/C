#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char letters = 0;
		printf("�������д��Сд��ĸ��");
		scanf("%c", &letters);
		if (letters >= 'a'&&letters <= 'z' || letters >= 'A'&&letters <= 'Z')
		{
			if (letters >= 'a'&&letters <= 'z')
			{
				printf("ת����Ĵ�д��ĸΪ��%c\n", letters - 32);
			}
			else if (letters >= 'A'&&letters <= 'Z')
			{
				printf("ת�����Сд��ĸΪ��%c\n", letters + 32);
			}
		}

	system("pause");
	return 0;
}