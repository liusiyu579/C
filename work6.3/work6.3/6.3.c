#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Year(int n)
{
	if (((n % 4 )== 0) &&(( n & 400 )!= 0) || ((n % 400 )== 0))
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	 Year(n);
	system("pause");
	return 0;
}