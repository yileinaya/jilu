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
//			break;//��while�У�break����������ֹѭ��
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
			continue;//����������Ĵ���ֱ�Ӽ����Ƿ���Ҫ������һ��ѭ��
		printf("%d", a);
		a++;

	}

	return 0;

}