#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Search(int arr[], int left, int right, int  n)
{
	int mid = (left + right) / 2;
	while (left <right)
	{
		if (arr[mid] > n)
		{
			right = mid - 1;
			mid = (left + right) / 2;
		}
		else if (arr[mid] < n)
			{
				left = mid + 1;
				mid = (left + right) / 2;
			}
				else
			{
				return mid;
			}
	}
	return -1;
}
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9};
	int len = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = len - 1;;
	int n = 0;
	scanf("%d", &n);
	int ret=Search(arr, left, right, n);
	printf("%d", ret);
	system("pause");
	return 0;
}