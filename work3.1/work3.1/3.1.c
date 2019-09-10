#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 25, 48, 96, 54, 87, 62, 12, 32, 78, 89 };
	int arr2[] = { 84, 98, 78, 45, 56, 12, 23, 32, 54, 65 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i <= 9; i++)
	{
		int temp = arr[i];
		arr[i] = arr2[i];
		arr2[i] = temp;
	}
	for (i = 0; i <= 9; i++)
	{
		printf("%d,", arr[i]);
	}
	printf("\n");
	for (i = 0; i <= 9; i++)
	{
		printf("%d,", arr2[i]);
	}
	system("pause");
	return 0;
}