#define _CRT_SECURE_NO_WARNINGS 1

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5 };
//	int arr2[10] = { 1, 2, 3, 4, 5, 6 , 7 };
//
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	printf("arr1=");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2=");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		if (arr1[i] != arr2[i])
//		{
//			int tmp = arr1[i];
//			arr1[i] = arr2[i];
//			arr2[i] = tmp;
//		}
//	}
//	printf("\n");
//	printf("\n");
//	printf("arr1=");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2=");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//
//	return 0;
//}

//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

//#include<stdio.h>
//
//int init(int *arr, int sz)
//{
//	int k = 0;
//	for (k = 0; k < sz; k++)
//	{
//		//*arr = 0;
//		//arr++;
//	    arr[k] = 0;
//	}
//	return arr;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = init(arr, sz);
//	int i = 0;
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//
//void reverse(int arr[10], int sz)
//{
//	int n = 0;
//	for (n = 0; n < sz-1; n++)//1 2 3 4 5 6 7 8 9 0
//	{
//		int k = 0;
//		for (k = 0; k < sz-1-n; k++)
//		{
//			int tmp = arr[k];
//			arr[k] = arr[k + 1];
//			arr[k + 1] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	reverse(arr,sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include<stdio.h>

void bubble_sort(int arr[10], int sz)

{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;
		//假设每一趟有序的时候flag = 1
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (1 == flag)
			break;
	}

}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	bubble_sort(arr, sz);

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
