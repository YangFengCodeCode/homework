#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)//大括号后面不要用分号
	if (a >= 140)
	{
		printf("Genius\n");
	}
	return 0;

}