#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINENUM 10
void Initboard(char board[][COLS], int rows, int cols,char set );
void Showboard(char board[][COLS], int rows, int cols);
void Setmine(char mine[][COLS], int row, int col);
void Findmine(char mineinfo[][COLS],char mine[][COLS], int row, int col);