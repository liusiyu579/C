#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Num(int n)
{
	int count=0;
	do
	{
		n=n/10;
		if (n!= 0)
		{
			count++;
		}
		else
		{
			n = n%10;
			count++;
		}
	} while (n!= 0);
	printf("%d ", count);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Num(n);
	system("pause");
	return 0;
}