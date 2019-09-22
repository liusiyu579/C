#pragma once //预防头文件重复引用
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void Initboard(char board[][COL], int row,int col);

void Showboard(char board[][COL],int row,int col);

void PlayMove(char board[][COL], int row, int col);

int Iswin(char board[][COL], int row, int col);

void ComputerMove(char board[][COL], int row, int col);

