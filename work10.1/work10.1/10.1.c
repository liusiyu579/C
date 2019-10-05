#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//二进制含有几个1
int count_one_bits(unsigned int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = count_one_bits(num);
	printf("%d", ret);
	system("pause");
	return 0;
}