#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û:\n");
	while ((i = getchar()) != EOF)
	{
		if (i >= 'a'&&i <= 'z')
		{
			printf("%c", i - 32);
		}
		else if (i >= 'A'&&i <= 'Z')
		{
			printf("%c", i + 32);
		}
		break;
	}
	printf("\n");
	system("pause");
	return 0;
}