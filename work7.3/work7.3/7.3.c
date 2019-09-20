#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int DigitSum(int n)
{
	int sum = 0;
	if (n != 0)
	{
		int a = n % 10;
		n = n / 10;
		sum = a + DigitSum(n);
	}
	return sum;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret=DigitSum(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}