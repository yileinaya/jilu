#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (a <= 10)
//	{
//		printf("%d", a);
//		a++;
//	
//	}
//
//	return 0;
//
//}

//int main()
//{
//	int a = 0;
//	while (a <= 10)
//	{
//		if (a == 5)
//			break;//在while中，break用于永久终止循环
//		
//		printf("%d", a);
//		a++;
//
//	}
//
//	return 0;
//
//}

int main()
{
	int a = 0;
	while (a <= 10)
	{
		if (a == 5)
			continue;//会跳过后面的代码直接计算是否需要进行下一次循环
		printf("%d", a);
		a++;

	}

	return 0;

}