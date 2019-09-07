#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			sum = j*i;
			printf(" %d*%d=%d ", j, i, sum);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
