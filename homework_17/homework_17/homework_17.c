//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10][10];
//	
//	for (i = 0; i < 10; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	for (i = 2; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i - 1; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	
//
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		/*for (j = i + 1; j < 10; j++)
//		{
//			printf(" ");
//		}*/
//		printf("\n");
//	}
//	return 0;
//}
//
//
//



#include <stdio.h>
int main()
{
	int A = 0, B = 0, C = 0, D = 0;
	int FD;
	int i;
	for (i = 1; i <= 4; i++)
	{

		if (i == 1)//A说的假
		{
			A = 1; C = 1; FD = 1; D = 0;
		}
		if (i == 2)//B说的假
		{
			A = 0; C = 0; FD = 1; D = 0;
		}
		if (i == 3)//C说的假
		{
			A = 0; C = 1; FD = 0; D = 0;
		}
		if (i == 4)//D的说的假
		{
			A = 0; C = 1; FD = 1; D = 0;
		}
		if (A + B + C + D + FD == 1 && FD == D)
			printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
	}
	return 0;
}