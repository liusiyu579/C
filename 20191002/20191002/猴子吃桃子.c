#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i=0;
	int sum = 1;
	for (i = 0; i < 10; i++)
	{
		sum = sum * 2 + 2;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}