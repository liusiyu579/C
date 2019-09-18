#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Fun_(int n)
{
	int i = 2;
	for (i = 2; i <=(n/2); i++)
	{
		if (n%i == 0)
		{
			printf("不是素数\n");
			break;
		}
		else
		{
			printf("是素数\n");
			break;
		}
	}
}
int main()
{
	int n = 103;
	Fun_(n);
	system("pause");
	return 0;
}