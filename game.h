#pragma once
//���Ŷ���
#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>
//��������
//��ʼ������
void Inboard(char board[ROW][COL], int row, int col);
//��ӡ����
void Playboard(char board[ROW][COL], int row, int col);
//�����
void  PlayerMove(char board[ROW][COL], int row, int col);
//������
void ComeMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
