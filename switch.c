#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("��ѡ����Ľ�ɫ");
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("ʥ��ʿ");
		break;
	case 2:
		printf("�̿�");
		break;
	case 3:
		printf("����");
		break;
	case 4:
		printf("��ʦ");
		break;
	case 5:
		printf("����");
		break;
	default:
		printf("�밴1��5��ѡ��");
		break;

	}
	return 0;
}