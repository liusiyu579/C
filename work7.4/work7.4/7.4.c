#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char* reverse_string(char * str)
{
	if ((*str) != '\0')
	{
		str++;
		reverse_string(str);
		printf("%c", *(str - 1));
	}
	return str;
}
int main()
{
	char str[] = "abcde";
	char *ret = reverse_string(str);
	system("pause");
	return 0;
}