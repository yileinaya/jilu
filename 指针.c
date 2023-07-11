#include<stdio.h>
int main()
{
	int a = 6;
	int* pa = &a;
	printf("%p", a);//%p用于打印地址
	return 0;
}