#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double n;
	int tmp;
	int count = 0;
	scanf("%lf", &n);
	tmp = (int)n;
	while (tmp != 0)
	{
		count++;
		tmp = tmp / 10;
	}
	printf("%d", count);
	system("pause");
	return 0;
}