#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void Menu()
{
	printf("***********************\n");
	printf("*****三子棋游戏*******\n");
	printf("******0.exit***********\n");
	printf("******1.play***********\n");
	printf("***********************\n");
}
void game()
{
	int ret = 0;
	char board[3][3] = { 0 };
	Initboard(board, 3, 3);
	Showboard(board, 3, 3);
	while (1)
	{
		PlayMove(board, 3, 3);
		ret=Iswin(board, 3, 3);
		if (ret != ' ')	
		{
			break;
		}
		Showboard(board, 3, 3);
		ComputerMove(board, 3, 3);
		Showboard(board, 3, 3);

	}
	if (ret == 'X')
	{
		printf("你真厉害\n");
	}
	else if (ret == 'O')
	{
		printf("你真low\n");
	}
	else //(ret == 'L')
	{
		printf("平局\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("请输入你的操作：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("游戏退出");
			break;
		default:
			break;
		}
	} while (input);
	system("pause");
	return 0;
}