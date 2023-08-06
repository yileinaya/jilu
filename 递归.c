#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);

}


int main()
{
	unsigned int a = 0;
	scanf("%u", &a);
	print(a);//print可以打印参数部分的每一位数字

	return 0;
}