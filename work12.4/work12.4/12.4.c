#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int Mystrlen(const char *arr)
{
	int count = 0;
	assert(arr != NULL);
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
void exchange2(char arr[], int left, int right)
{
	while (left < right)
	{
		char tmp =arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
char* exchange1(char arr[])
{
	int i = 0;
	int left = 0;
	int right = Mystrlen(arr) - 1;
	exchange2(arr, left, right);
	while (arr[i] != '\0')
	{
		left = i;
		while ((arr[i] != ' ') && (arr[i] != '\0'))
		{
			i++;
		}
		right = i-1;
		exchange2(arr, left, right);
		if (arr[i] != '\0')
			i++;
	}
	return arr;
}
int main()
{
	char arr[] ="student a am i";
	exchange1(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}
