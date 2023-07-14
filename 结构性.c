#include<stdio.h>

	struct xiaoyi
	{

		char name[30];
		int age;
		double height;
	};
	int main()
	{
		struct xiaoyi s = { "ะกาม",18,165.7 };
		printf("%s %d %lf", s.name, s.age, s.height);

		return 0;
	}

