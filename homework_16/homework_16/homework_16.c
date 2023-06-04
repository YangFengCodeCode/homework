#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		char arr[20][20] = { 0 };
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				arr[i][j] = ' ';
//			}
//		}
//		int left = 0;
//		int right = n - 1;
//		for (i = 0; i < n; i++)
//		{
//			arr[i][left] = '*';
//			arr[i][right] = '*';
//			left++;
//			right--;
//		}
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				printf("%c", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		char arr[20][20] = { 0 };
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
			{
				arr[i][j] = '  ';
			}
		}

		for (i = 0; i < n; i++)
		{
			int right = n - 1;
			int a = 0;
			while (a <= i)
			{
				arr[i][right] = '*';
				right--;
				a++;
			}
		}
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
			{
				printf("%c ", arr[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}