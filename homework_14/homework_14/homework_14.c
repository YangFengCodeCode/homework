#define _CRT_SECURE_NO_WARNINGS 1
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�

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