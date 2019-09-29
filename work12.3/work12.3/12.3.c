#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int arr[11] = { 0, 0, 2, 2,3,3, 4, 4, 6, 6, 7 };
	int b = 0;
	int i = 0;
	for (i = 0; i < 11; i++)
	{
		b = b^arr[i];
	}
	printf("%d", b);
	system("pause");
	return 0;
}