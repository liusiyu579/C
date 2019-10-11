#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
	int sum = 0;
	int i = 0;
	for (i = 0; i < 32; ++i)
	{
		int ret = ((value >> i) &1)*pow(2, 31 - i);
		sum = sum + ret;
	}
	printf("%d", sum);
}
int main()//
{
	int num =30;
	reverse_bit(num);
	system("pause");
	return 0;
}