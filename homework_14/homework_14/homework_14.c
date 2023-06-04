#define _CRT_SECURE_NO_WARNINGS 1
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）

#include<stdio.h>

int Count(int n)
{
	if (n / 2 != 0)
		return n + Count(n / 2);
	else
		return 0;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Count(n);
	printf("%d\n", ret);
	return 0;
}