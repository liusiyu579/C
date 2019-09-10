#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	printf("输入两个操作数:\n");
	scanf("%d%d", &a, &b);
	c = a%b;
	if (c!=0)
	{
		a = b;
		b = c;
		c = a%b;
	}
	printf("%d\n", b);
	system("pause");
	return 0;
}