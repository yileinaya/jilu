#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int max = 0;
	if (a < b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	while (1)
	{
		if ((a % max == 0) && (b % max == 0))
		{
			printf("���Լ�����ǣ�%d\n", max);
			break;
		}
		max--;

	}
	return 0;
}