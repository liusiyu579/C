#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int count = 3;
	printf("�㹲��������������Ļ���\n");
	while (count > 0)
	{
		printf("�������������룺");
		scanf("%s", &str);
		if (strcmp(str,"579579")==0)
		{
			printf("��½�ɹ�\n");
			break;
		}

		else
		{
			printf("�������\n");
			count--;
			printf("������%d�λ���\n", count);
		}
	}
	system("pause");
	return 0;
}