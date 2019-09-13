#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 2;
	int sn = 0;
	int n = 0;
	int i = 0;
	for (n = 1; n <= 5; n++)
	{
		i = i*10 + a;
		sn = sn + i;
	}
	printf("%d\n", sn);
	system("pause");
	return 0;
}