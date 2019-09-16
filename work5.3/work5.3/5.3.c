#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int count = 3;
	printf("你共有三次输入密码的机会\n");
	while (count > 0)
	{
		printf("请输入您的密码：");
		scanf("%s", &str);
		if (strcmp(str,"579579")==0)
		{
			printf("登陆成功\n");
			break;
		}

		else
		{
			printf("密码错误\n");
			count--;
			printf("您还有%d次机会\n", count);
		}
	}
	system("pause");
	return 0;
}