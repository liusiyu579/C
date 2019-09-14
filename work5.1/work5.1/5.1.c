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
		printf("请输入一个数:");
		int n = 0;
		scanf("%d", &n);
		if (n > num)
		{
			printf("大了\n");
			
		}
		else if (n < num)
			{
				printf("小了\n");
			}
		   else
			{
				printf("回答正确\n");
				break;
			}
	} 
	system("pause");
	return 0;
}