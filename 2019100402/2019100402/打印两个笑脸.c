#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i, j;
	printf("\1\1\n");
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c%c", 77, 77);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}