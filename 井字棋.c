#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("***** 1. 开始游戏 ****\n");
	printf("***** 2. 退出游戏 ****\n");
	printf("**********************\n");
	printf("**********************\n");
}
void game()
{
	char board[ROW][COL];
	//初始化棋盘
	Inboard(board, ROW, COL);
	//打印棋盘
	Playboard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//玩家先走
		PlayerMove(board, ROW, COL);
		Playboard(board, ROW, COL);
		 ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		
		//电脑走
		ComeMove(board, ROW, COL);
		Playboard(board, ROW, COL);
		//判断获胜
	 ret = IsWin(board,ROW,COL);
		if (ret != 'C')
			break;
	}
	
	if (ret == '*')
	{
		printf("玩家赢");
		
	}
	else if(ret =='#')
	{
		printf("电脑赢");
		
	}
	else
	{
		printf("平局");
	}
	Playboard(board, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出");
			break;
		default:
			printf("选择错误，请重新选择");
			break;
		}

	} while (input);

	return 0;
}