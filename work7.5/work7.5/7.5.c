#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char *p)
{
	/*·ÇµÝ¹é
	int num = 0;
	while (*p)
	{
		num++;
		p++;
	}
	return num;*/
	if (*p == '\0')
	{
		return 0;
	}
	return 1 + my_strlen(p + 1);
}
int main()
{
	char str[] = "asdfgh";
	int ret = my_strlen(str);
	printf("%d\n", ret);
	system("pause");
	return 0;
}