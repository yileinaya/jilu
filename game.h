#pragma once
//符号定义
#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>
//函数申明
//初始化棋盘
void Inboard(char board[ROW][COL], int row, int col);
//打印棋盘
void Playboard(char board[ROW][COL], int row, int col);
//玩家走
void  PlayerMove(char board[ROW][COL], int row, int col);
//电脑走
void ComeMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
