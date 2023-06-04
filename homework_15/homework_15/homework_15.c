#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//void Sort(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if ((arr[j]) % 2 == 0)
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void Print(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Sort(arr, sz);
//	Print(arr, sz);
//	return 0;
//}


#include<stdio.h>

void Sort(int *s, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if ((s[j]) % 2 == 0)
			{
				int tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
			}
		}
	}
}

void Print(int *s, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(s+i));
	}
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	Sort(arr, sz);
	Print(arr, sz);
	return 0;
}