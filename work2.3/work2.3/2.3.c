#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int arr[10])
{
	int i = 0;
	int y = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i]>y)
		{
			y = arr[i];
		}
	}
	return y;
}
int main()
{
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int p = Max(arr);
	printf("%d\n", p);
	system("pause");
	return 0;
}