#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Fun_(int n)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1; i <= n; i++)
	{
		for (k = 1; k <= i; k++)
		{
			j = i*k;
			printf("%d*%d=%-4d", k,i,j);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	Fun_(n);
	system("pause");
	return 0;
}