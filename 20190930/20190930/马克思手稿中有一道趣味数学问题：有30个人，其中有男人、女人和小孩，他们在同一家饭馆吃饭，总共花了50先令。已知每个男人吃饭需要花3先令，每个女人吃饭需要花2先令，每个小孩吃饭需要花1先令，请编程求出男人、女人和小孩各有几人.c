#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x, y, z;
	for (x = 1; x <= 28; x++)
	{
		for (y = 1; y <= 28; y++)
		{
			for (z = 1; z <= 28; z++)
			{
				if (x + y + z == 20 && 3 * x + 2 * y + z == 50)
				{
					printf("%d %d %d\n", x, y, z);
				}
			}
		}
	}
	system("pause");
	return 0;
}