#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int Muth(int n, int k)
{
	if (n == 1)
	{
		return 1;
	}
	return n*pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	int ret = Muth(n, k);
	printf("%d\n", ret);
	system("pause");
	return 0;
}