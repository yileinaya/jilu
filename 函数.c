#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int x, int y)
{
	int c = 0;
	c = x * y;//ֻ��ı�����ķ��ż��ɸı���������
	return c;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int sum = Add(a, b);
	printf("%d", sum);

	return 0;
}