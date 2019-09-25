#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')==3)
		{
			printf("%cÊÇÐ×ÊÖ\n", killer);
			break;
		}
	}
	system("pause");
	return 0;
}