#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int different(int n, int m)
{
	int i = 0;
	int count = 0;
	int y = 0;
	y = n^m;
	for (i = 0; i < 32; i++)
	{
		if (((y >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	//0001  1010
	int a = 1;
	int b = 10;
	int ret=different(a, b);
	printf("%d", ret);
	system("pause");
	return 0;
}