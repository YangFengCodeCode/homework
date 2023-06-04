#define _CRT_SECURE_NO_WARNINGS 1

//输入：
//5 6
//1 3 7 9 22
//2 8 10 17 33 44
//复制
//输出：
//1 2 3 7 8 9 10 17 22 33 44


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[200] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = n; i < n+m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < n + m - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n + m-i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n+m; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}


//输入：
//5
//1 6 9 22 30

//输出：
//sorted
//复制
//示例2
//输入：
//5
//3 4 7 2 10

//输出：
//unsorted

//示例3
//输入：
//5
//1 1 1 1 1

//输出：
//sorted


//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int arr[30] = { 0 };
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int flag = 0;
//	for (i = 0; i < m-1; i++)
//	{
//		if (arr[i] > arr[i + 1])
//			continue;
//		else
//		{
//			for (i = 0; i < m - 1; i++)
//			{
//				if (arr[i] <= arr[i + 1])
//					continue;
//				else
//				{
//					flag = 1;
//					printf("unsorted\n");
//					goto again;
//				}
//			}
//		}
//		
//
//	}
//	again:
//	if(flag == 0)
//		printf("sorted\n");
//	return 0;
//}


#include<stdio.h>
int main()
{
	int y = 0;
	int m = 0;
	while (scanf("%d %d", &y, &m) != EOF)
	{
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		{
			if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m==12)
			{
				printf("31\n");
			}
			else if (m == 2)
			{
				printf("29\n");
			}
			else
			{
				printf("30\n");
			}

		}
		else
		{
			if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m==12)
			{
				printf("31\n");
			}
			else if (m == 2)
			{
				printf("28\n");
			}
			else
			{
				printf("30\n");
			}
		}
	}
	return 0;
}