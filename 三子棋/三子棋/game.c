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
		printf("����ƶ�:\n");
		printf("������1-3�����꣺");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')//û���¹�����
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("��λ���¹�����\n");
			}
		}
		else
		{
			printf("���겻�Ϸ�\n");
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
	{//��
		if (board[i][0] == board[i][1] && board[i][1] ==
			board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
		//��
		if (board[0][i] == board[1][i] && board[1][i] ==
			board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}//�Խ���
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
	return ' ';//��Ϸ����
}
void ComputerMove(char board[][COL], int row, int col)
{
	printf("�����ƶ�\n");
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


