#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("***** 1. ��ʼ��Ϸ ****\n");
	printf("***** 2. �˳���Ϸ ****\n");
	printf("**********************\n");
	printf("**********************\n");
}
void game()
{
	char board[ROW][COL];
	//��ʼ������
	Inboard(board, ROW, COL);
	//��ӡ����
	Playboard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		Playboard(board, ROW, COL);
		 ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		
		//������
		ComeMove(board, ROW, COL);
		Playboard(board, ROW, COL);
		//�жϻ�ʤ
	 ret = IsWin(board,ROW,COL);
		if (ret != 'C')
			break;
	}
	
	if (ret == '*')
	{
		printf("���Ӯ");
		
	}
	else if(ret =='#')
	{
		printf("����Ӯ");
		
	}
	else
	{
		printf("ƽ��");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}

	} while (input);

	return 0;
}