#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char mima[20] = { 0 };
    printf("����������");
    scanf("%s", mima);
    printf("��ȷ������(Y/N)");
    int a = 0;
    while ((a=getchar()) != '\n')
    {
        ;
    }
    int ch = getchar();
    if (ch == 'Y')
    {
        printf("ȷ�ϳɹ�");
    }
    else
    {
        printf("ȷ��ʧ��");
    }
 	return 0;
}