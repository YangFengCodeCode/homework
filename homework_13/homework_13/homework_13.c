#define _CRT_SECURE_NO_WARNINGS 1

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

//���磺2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//
//int Sum(int n)
//{
//	
//	if (n/10<=9999)
//	{
//		return n + Sum(n * 10 + 2);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long int ret = Sum(n);
//	printf("%ld", ret);
//	return 0;
//}


//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣

//arr��һ������һά����

#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int* s = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(s + i));
	}

	return 0;
}