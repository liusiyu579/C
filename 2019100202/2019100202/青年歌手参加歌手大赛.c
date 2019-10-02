#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double n,a[10], max, min,sum;
	int i;
	while (scanf("%lf", &n) != EOF)
	{
		sum = 0;
		for (i = 0; i < n; i++)
		{
			scanf("%lf", &a[i]);
		}
		max = a[0];
		min = a[0];
		for (i = 0; i < n; i++)
		{
			if (max < a[i])
			{
				max = a[i];
			}
			if (min < a[i])
			{
				min = a[i];
			}
		}
		for (i = 0; i < n; i++)
		{
			if (a[i] != max&&a[i] != min)
			{
				sum = sum + a[i];
			}
		}
		printf("%lf  ", sum / (n - 2));

	}

	system("pause");
	return 0;
}