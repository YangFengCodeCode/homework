#define _CRT_SECURE_NO_WARNINGS 1

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，

//例如：2 + 22 + 222 + 2222 + 22222
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


//写一个函数打印arr数组的内容，不使用数组下标，使用指针。

//arr是一个整形一维数组

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