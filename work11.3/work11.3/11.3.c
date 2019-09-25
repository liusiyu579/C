#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Yanghui(int arr[][10],int row,int col)
{
	int i = 1;
	for (; i <= row; i++)
	{
		int j = 1;
		for (; j <= i; j++)
		{
			if (j == 1||i==j)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i-1][j];
			}
		}
	}
}
void Show(int arr[][10], int row, int col)
{
	int i = 1;
	int j = 1;
	for (i=1; i <= row; i++)
	{
		for (j=1; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[10][10] = { 0 };
	Yanghui(arr, 10, 10);
	Show(arr, 10, 10);
	system("pause");
	return 0;
}