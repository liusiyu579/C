#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int day, month, year, sum=0, leap;
	scanf("%d%d%d", &year, &month, &day);
	switch (month)
	{
	case 12:sum += 31;
	case 11:sum += 30;
	case 10:sum += 31;
	case 9:sum += 30;
	case 8:sum += 31;
	case 7:sum += 31;
	case 6:sum += 30;
	case 5:sum += 31;
	case 4:sum += 30;
	case 3:sum += 31;
	case 2:sum += 28;
	case 1:sum += day;
	default:printf("dat a error");
		break;
	}
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		leap = 1;
	}
	else
	{
		leap = 0;
	}
	if (leap == 1 && month > 2)
	{
		sum++;
	}
	printf("it is the %d day\n", sum);
	system("pause");
	return 0;
}