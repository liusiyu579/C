#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	int max = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		max = b;
		b = a;
		a = max;
	}
	if (a < c)
	{
		max =c;
		c = a;
		a = max;
	}
	if (b < c)
	{
		max = c;
		c = b;
		b = max;
	}
	printf("%d,%d,%d\n", a, b, c);
	system("pause");
	return 0;
}