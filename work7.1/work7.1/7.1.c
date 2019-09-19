#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Febonacci(int n)
{
	/*·ÇµÝ¹é
	int i = 0;
	int j = 1;
	int sum = 0;
	do
	{
		sum = i + j;
		j = i;
		i = sum;
		--n;
	} while (n >= 1);
	return sum;*/
	//1 1 2 3 5 8 13 21   
	//µÝ¹é
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return  Febonacci(n - 1) + Febonacci(n-2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret=Febonacci(n);
	printf("%d", ret);
	system("pause");
	return 0;
}