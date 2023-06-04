//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表

#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//void koujue(int m)
//{
//	int i = 0;
//    int b = 0;
//	int k = 0;
//	int n = 0;
//	for (n = 1; n <= m; n++)
//	{
//		int k = n;
//		for (i = n; i <= m; i++)
//		{
//			int b = k * i;
//			printf("%d*%d = %d\n", k, i, b);
//
//		}
//	}
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	koujue(m);
//
//	return 0;
//}


//实现一个函数来交换两个整数的内容。

//#include<stdio.h>
//
//int Swap(int *px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前a = %d, b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后a = %d, b = %d\n", a, b);
//	return 0;
//}


//实现函数判断year是不是润年

//#include<stdio.h>
//
//void run(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0)
//		printf("%d是闰年\n", x);
//	else if (x % 400 == 0)
//		printf("%d是闰年\n",x);
//	else
//		printf("不是闰年\n");
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	run(a);
//	return 0;
//}



//实现一个函数，判断一个数是不是素数。
//
//利用上面实现的函数打印100到200之间的素数。

#include<stdio.h>

int sushu(int x)
{
	int i = 0;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return 0;
			break;
		}
	}
     return 1;
}
int main()
{
	int n = 0;
	int count = 0;
	for (n = 100; n <= 200; n++)
	{
		if (1 == sushu(n))
		{
			printf("%d\n", n);
			count++;
		}
		
	}
	printf("count = %d\n", count);
	return 0;
}

//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 101; i < 200; i++)
//    {
//        int k = 0;
//        int flag = 1;//假设flag = 1 为素数
//        for (k = 2; k < i; k++)
//        {
//            if (i % k == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            count++;
//            printf("%d\n", i);
//        }
//    }
//    printf("count = %d\n", count);
//    return 0;
//}