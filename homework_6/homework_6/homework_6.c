//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	
//	int ret = 1;
//	int a = 0;
//	for (a = 1; a < 10; a++)
//	{
//		for (i = a; i < 10; i++)
//		{
//			ret = a * i;
//			printf("%d * %d = %d\n", a, i, ret);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr1[] = 0;
//	int arr2[] = 0;
//	int i = 0;
//	scanf_s("%d", &arr1);
//	for (i = 1; i <= 10; i++)
//	{
//		if(arr1 <)
//	}
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include<stdio.h>
//int main()
//{
//	double n = 0;
//	
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum = 0;
//	for (n = 1; n <= 100;n = n + 2)
//	{
//		sum1 = sum1 + 1.0000000/n;
//	
//	
//	}
//	for (n = 2; n<= 100;n = n + 2)
//	{
//		sum2 = sum2 + 1.0000000/n;
//		
//
//	}
//
//	sum = sum1 - sum2;
//	printf("%lf\n", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 9; i <= 100 ;i = i + 10)
//	{
//		count++;
//	}
//	printf("count = %d", count);
//	return 0;
//}


#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	
	int k = 5;
	int num = (sizeof(arr)) / (sizeof(arr[0]));
	/*printf("%d\n", num);*/
	int mid = 0;
	int left = 0;
	int right = num - 1;
	int flag = 0;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
	
		if (arr[mid] == k)
		{
			flag = 1;
			printf("找到了，下标是%d\n", mid);
			break;
		}

		else if (arr[mid]<k)
			left= mid + 1;

		else
			right = mid - 1;
	}
	if (flag == 0)
		printf("没找到\n");
	return 0;
}

