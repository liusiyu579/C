#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void Menu()
{
	printf("***********************\n");
	printf("*****��������Ϸ*******\n");
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
		printf("��������\n");
	}
	else if (ret == 'O')
	{
		printf("����low\n");
	}
	else //(ret == 'L')
	{
		printf("ƽ��\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("��������Ĳ�����");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("��Ϸ�˳�");
			break;
		default:
			break;
		}
	} while (input);
	system("pause");
	return 0;
}