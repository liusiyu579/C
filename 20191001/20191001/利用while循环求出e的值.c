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
	int n = 1;
	double sum = 1;
	while ((1.0/Fac(n))>0.0001)
	{
		int ret = Fac(n);
		sum = sum + 1.0 / ret;
		n++;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}