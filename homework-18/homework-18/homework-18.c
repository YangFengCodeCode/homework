#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//void find_number(int(*p)[5], int r, int c, int n)
//{
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			if (*(p[i] + j) == n)
//			{
//				flag = 1;
//			}
//		}
//	}
//	if (flag == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//		printf("没找到\n");
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int n = 0;
//	scanf("%d", &n);
//	find_number(arr, 3, 5, n);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//char* ratate(char* s, int k, int m)
//{
//	int i = 0;
//	char* ret = s;
//	char* s1 = ret;
//	for (i = 1; i <= k; i++)
//	{
//		int j = 0;
//		s1 = ret;
//		for (j = 0; j < m-1; j++)
//		{
//			char tmp = *s1;
//			*s1 = *(s1 + 1);
//			*(s1 + 1) = tmp;
//			s1++;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr[30] = { 0 };
//	gets(arr);
//	int m = strlen(arr);
//	int k = 0;
//	scanf("%d", &k);
//	ratate(arr, k, m);
//	printf("%s", arr);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int ratate(char* s1, char *s2, int m)
//{
//	int i = 0;
//	int k = 0;
//	if (m % 2 == 0)
//	{
//		k = m / 2;
//	}
//	else
//	{
//		k = (m - 1) / 2;
//	}
//	char* ret = s1;
//	char* str1 = ret;
//	char* str2 = s2;
//	for (i = 1; i <= k; i++)
//	{
//		int j = 0;
//		str1 = ret;
//		for (j = 0; j < m - 1; j++)
//		{
//			char tmp = *str1;
//			*str1 = *(str1 + 1);
//			*(str1 + 1) = tmp;
//			str1++;
//		}
//		if (strcmp(s1, s2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[30] = "AABCD";
//	char arr2[30] = "BCDAA";
//	int m = strlen(arr1);
//	int ret = ratate(arr1,arr2, m);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//void test1()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	Print(arr, sz);
//}
//int main()
//{
//
//	test1();
//	return 0;
//}



#include<stdio.h>

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void Swap(char* buf1, char* buf2, int size)
{
	int i = 0;
	char tmp = 0;
	for (i = 0; i < size; i++)
	{
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int num, int size, int (*cmp)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1; j++)
		{
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				Swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
	
}
int cmp_int(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
int main()
{
	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	Print(arr, sz);
	return 0;
}