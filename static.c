#include<stdio.h>
void test()
{
	 static int a = 2;
	a++;
	printf("%d", a);
}


int main()
{
	int t = 0;
	while (t < 10);
	{
		test();
		t++;

	}

	return 0;
}