#include<stdio.h>
int main()
{
	int a = 0;
	for (a = 1; a <= 100; a++)
	{    
		if (a % 2 == 1)
			printf("%d", a);
	}
	return 0;
}