#include<stdio.h>
int main()
{
	int a = 48;
	int b = 64;
	int c = 88;
	int d = (a = c + 58, b = a - 69, d =b  + 21 );
	printf("%d", d);

	return 0;
}