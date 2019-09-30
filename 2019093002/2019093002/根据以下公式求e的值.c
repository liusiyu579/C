#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fac(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n*Fac(n - 1);
}
int main()
{
	double sum = 1;
	int i = 1;
	for (i = 1; i < 50; i++)
	{
		int ret = Fac(i);
		sum = sum + 1.0/ret;
	}
	printf("%lf\n",sum);
	system("pause");
	return 0;
}