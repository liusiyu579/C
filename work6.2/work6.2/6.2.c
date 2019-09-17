#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Fun_(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 10;
	int b = 60;
	Fun_(&a,&b);
	printf("%d,%d\n", a, b);
	system("pause");
	return 0;
}