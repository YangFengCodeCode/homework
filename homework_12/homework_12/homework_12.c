#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。

//arr是一个整形一维数组。


//#include<stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	int* s = &arr[0];
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		*s = i;
//		s++;
//	}
//
//	s = arr;
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(s + i));
//	}
//	return 0;
//}




//void Reverse(int* s)
//{
//	int left = 0;
//	int right = strlen(s) - 1;
//	while (left < right)
//	{
//		char tmp = s[left];
//		s[left] = s[right];
//		s[right] = tmp;
//		left++;
//		right--;
//	}
//}
//#include<stdio.h>
//#include<string.h>
//
//void Reverse(char* s, int len)
//{
//	int left = 0;
//	int right = strlen(s) - 1;
//	while (left < right)
//	{
//		char tmp = s[left];
//		s[left] = s[right];
//		s[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[10000] = "0";
//	scanf("%[^\n]", arr);
//	int len = strlen(arr);
//	Reverse(arr, len);
//	printf("%s", arr);
//	
//	return 0;
//}

//int main()
//{
//	char arr[10000] = "0";
//	int i = 0;
//	scanf("%[^\n]", arr);// 正则表达式
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 13; i < 7; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= 6; j++)
//		{
//			printf(" ");
//		}
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int Count(long int n)
//{
//	int count = 0;
//	while(n / 10 != 0)
//	{
//		count++;
//		n = n / 10;
//	}
//	return count + 1;
//}
//int main()
//{
//	long int n = 1560;
//	int ret = Count(n);
//	printf("%d", ret);
//
//}


//#include<stdio.h>
//
//int Count(long int n)
//{
//	int count = 0;
//	while (n / 10 != 0)
//	{
//		count++;
//		n = n / 10;
//	}
//	return count + 1;
//}
//
//int Bow(long int n, int ret)
//{
//	long int i = 0;
//	int a = 1;
//	for (i = 1; i <= ret; i++)
//	{
//		a = n * a;
//	}
//	return a;
//}
//int IsWater(long int n, int ret)
//{
//	
//	int a = n % 10;
//	if (n > 9)
//		return Bow(n,ret) + IsWater(n / 10, ret);
//	else
//		return Bow(n,ret);
//}
//int main()
//{
//	long int n = 0;
//	int count = 0;
//	for (n = 0; n <= 100000; n++)
//	{
//		int ret = Count(n);
//		long long int b = IsWater(n, ret);
//		if (b == n)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，

//例如：2 + 22 + 222 + 2222 + 22222
#include<stdio.h>

int Sum(int a)
{
	int i = 0;
	
	if (i<5)
	{
		return a + Sum(a * 10 + a);
		i++;
	}
	
	
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	long int ret = Sum(a);
	printf("%ld", ret);
	return 0;
}