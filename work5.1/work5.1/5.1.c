#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	srand((unsigned)time(NULL));
	int num = rand() % 100 + 1;
	
	while (1)
	{
		printf("������һ����:");
		int n = 0;
		scanf("%d", &n);
		if (n > num)
		{
			printf("����\n");
			
		}
		else if (n < num)
			{
				printf("С��\n");
			}
		   else
			{
				printf("�ش���ȷ\n");
				break;
			}
	} 
	system("pause");
	return 0;
}