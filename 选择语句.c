#include<stdio.h>
int main()
{
	int age = 28;
	if (age < 18)
		printf("����");
	else if (age >= 18 && age < 30)
		printf("����");
	else if (age >= 30 && age < 50)
		printf("׳��");
	else
		printf("����");
    return 0;
}
