#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Menu()
{
	printf("**************************\n");
	printf("******ɨ����Ϸ***********\n");
	printf("*******1.play************\n");
	printf("*******0.exit*************\n");
	printf("**************************\n");
}
void game()
{
	char mineinfo[ROWS][COLS];
	char mine[ROWS][COLS];

	Initboard(mineinfo, ROWS, COLS,'*');
	Initboard(mine, ROWS, COLS,'0');

	Showboard(mineinfo, ROWS, COLS);
	//printf("===================\n");
	Setmine(mine, ROW, COL);
	Findmine(mineinfo, mine, ROW, COL);
	//Showboard(mine, ROWS, COLS);
	//printf("====================\n");


}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("��������Ĳ�������");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("��Ϸ�˳�\n");
			break;
		default:
			break;
		}
	} while (input);
	system("pause");
	return 0;
}