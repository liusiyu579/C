#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Initboard(char board[][COL], int row, int col)
{
	/*int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}*/
	memset(board, ' ', row*col*sizeof(char));
}

void Showboard(char board[][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void PlayMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家移动:\n");
		printf("请输入1-3的坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')//没被下过棋子
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("该位置下过棋子\n");
			}
		}
		else
		{
			printf("坐标不合法\n");
		}
	}

}

static int Isfull(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return	 0;
			}
		}
	}
	return 1;
}
int Iswin(char board[][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{//行
		if (board[i][0] == board[i][1] && board[i][1] ==
			board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
		//列
		if (board[0][i] == board[1][i] && board[1][i] ==
			board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}//对角线
		if (board[0][0] == board[1][1] && board[1][1] ==
			board[2][2] && board[0][0] != ' ')
		{
			return board[0][0];
		}
		if (board[0][2] == board[1][1] && board[1][1] ==
			board[2][0] && board[0][2] != ' ')
		{
			return board[0][2];
		}

		if (Isfull(board, row, col ))
		{
			return 'L';
		}
	}
	return ' ';//游戏继续
}
void ComputerMove(char board[][COL], int row, int col)
{
	printf("电脑移动\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';	
			break;
		}
	}
}


