#include<stdio.h>
int main()
{
	int a = 6;
	int b = 0;
	int max = 0;
	if (a > b)
	    max = a;
	else
		max = b;

	max = a > b ? a : b;
	printf("%d", max);

	return 0;
}