#include<stdio.h>
int main()
{
	int age = 28;
	if (age < 18)
		printf("少年");
	else if (age >= 18 && age < 30)
		printf("青年");
	else if (age >= 30 && age < 50)
		printf("壮年");
	else
		printf("老年");
    return 0;
}
