#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void Initboard(char board[][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void Showboard(char board[][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows - 1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < rows - 1; i++)
	{
		printf("%d ", i);
		for (j = 1; j < cols - 1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void Setmine(char mine[][COLS], int row, int col)
{
	int count = MINENUM;
	int x = 0;
	int y = 0;
	while (count != 0)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

static int Getmine(char mine[][COLS], int x, int y)
{
	return mine[x - 1][y - 1] - '0' +
		mine[x - 1][y] - '0' +
		mine[x][y + 1] - '0' +
		mine[x + 1][y + 1] - '0' +
		mine[x + 1][y] - '0' +
		mine[x + 1][y - 1] - '0' +
		mine[x][y - 1] - '0';
}

void Findmine(char mineinfo[][COLS], char mine[][COLS],int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (count<row*col-MINENUM)
	{
		printf("请输入你的坐标:");
		scanf("%d%d", &x, &y);
		if (x>=1&&x<=9&&y>=1&&y<=9)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				break;
			}
			else
			{
				int mineNUM = Getmine(mine, x, y);
				mineinfo[x][y] = mineNUM + '0';
				count++;
				Showboard(mineinfo, ROWS, COLS);
			}
		}
		else
		{
			printf("您输入的坐标不合法\n");
		}
	}
	if (count = row*col - MINENUM)
	{
		printf("您扫雷成功\n");
	}
}