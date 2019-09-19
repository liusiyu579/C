#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Init(int arr[])
{
	printf("初始化数组：\n");
	int i = 0;
	for (i = 0; i <= 9; i++)
	{
		printf("%d\n",&arr[i]);
	}
	printf("\n");
	return 0;
}
int Empty(int arr[])
{
	printf("清空数组：\n");
	int i = 0;
	for (i = 0; i <= 9; i++)
	{
		arr[i] = 0;
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}
int Reverse(int arr[],int len)
{
	printf("逆置数组：\n");
	
	int left = 0;
	int right=len-1;
	while (left<right)
	{
		int tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		left++;
		right--;
	}
	

	printf("\n");
	return 0;
}
int main()
{
	int arr[10] = {5,7,9,6,3,1,4,2,0,8};
	int len = sizeof(arr) / sizeof(arr[0]);
	Init(arr);
	Empty(arr);
	Reverse(arr,len);
	for (int i = 0; i < len; i++)
	{
		printf("%d,", arr[i]);
	}
	system("pause");
	return 0;
}