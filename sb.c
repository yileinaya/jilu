#include<stdio.h>
//struct yi
//{
//	char name[20];
//	int shenggao;
//	double tizhong;
//};
//
//
//int main()
//{
//	struct yi a = { "ะกาม", 160, 90 };
//	printf("%s %d %lf", a.name, a.shenggao, a.tizhong);
//	
//	return 0;
//}

int main()
{
	int a = 0;
	while (a<=100)
	{
		if (a % 2 == 1)
		{
			printf("%d ", a);
		}
		a++;
	}
	return 0;
}