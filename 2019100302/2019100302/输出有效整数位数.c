#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char i, j, k;
	for (i = 'X'; i <= 'Z'; i++)
		for (j = 'X'; j <= 'Z'; j++)
			for (k = 'X'; k <= 'Z'; k++)
				if (i != j&&i != k&&j != k)
				{
					if (i != 'X'&&k != 'X'&&k != 'Z')
					printf("����ѡ�ֵı�������Ϊ��\nA--%c B--%c C--%c\n", i, j, k);
				}
	system("pause");
	return 0;
}