#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
int main()
{
	int i = 0;//分母
	float sum = 0;
	float sum1 = 0;
////////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
	for (i = 1; i <=99; i += 2)
	{
		sum = sum + 1.0 / i;
	}
	for (i = 2; i <=100; i += 2)
	{
		sum1 =sum1 - 1.0 / i;
	}
	float sum3 = sum + sum1;
	printf("%f\n", sum3);
	system("pause");
	return 0;
}