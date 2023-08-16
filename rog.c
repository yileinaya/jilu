#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double Yi(int n, int k)
{
	if (k == 0)
	{
		return 1.0;
	}
	else if (k > 0)
	{
		return n * Yi(n, k - 1);
	}
	else
	{
		return 1.0 / (Yi(n, -k));
	}
}


int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double sum = Yi(n, k);
	printf("%lf", sum);
	return 0;
}