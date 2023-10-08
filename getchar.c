#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char mima[20] = { 0 };
    printf("请输入密码");
    scanf("%s", mima);
    printf("请确认密码(Y/N)");
    int a = 0;
    while ((a=getchar()) != '\n')
    {
        ;
    }
    int ch = getchar();
    if (ch == 'Y')
    {
        printf("确认成功");
    }
    else
    {
        printf("确认失败");
    }
 	return 0;
}