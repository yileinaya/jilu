#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("请选择你的角色");
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("圣骑士");
		break;
	case 2:
		printf("刺客");
		break;
	case 3:
		printf("奶妈");
		break;
	case 4:
		printf("法师");
		break;
	case 5:
		printf("射手");
		break;
	default:
		printf("请按1—5来选择");
		break;

	}
	return 0;
}