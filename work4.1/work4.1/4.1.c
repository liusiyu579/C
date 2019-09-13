#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int a= 0;//个位
	int b = 0;//十位
	int c = 0;//百位
	for (i = 100; i <= 999999; i++)
	{
		c = i / 100;
		b = i / 10 - c * 10;
		a = i % 10;
		if (i == c*c*c+b*b*b+a*a*a)
		{
			printf("%d",i);
			putchar('\n');
		}
	}
	system("pause");
	return 0;
}