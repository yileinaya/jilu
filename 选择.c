#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int input = 0;
	printf("进入异界");
	printf("选择角色（1/2）?");
		scanf("%d", &input);
	if (input == 1)
	printf("战士");
	else
	printf("法师");
	
	
	return 0;
}