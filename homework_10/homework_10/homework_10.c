#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前 a=%d b=%d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = b ^ a;
//	printf("交换后 a=%d b=%d", a, b);
//	return 0;
//}


#include<stdio.h>

int count_1(int a)
{
	int count = 0;
	int i = 0;
	for (i = 0; i<32; i++)
	{
		
		if ((a & 1) == 1)
		{
			count++;
		}
		a = a >> 1;
	}

	/*while (a != 0)
	{
		if ((a & 1) == 1)
		{
			count++;
		}

		a = a >> 1;
	}*/
	return count;
}


int main()
{
	int a = 0;
	scanf("%d", &a);
	int ret = count_1(a);
	printf("%d\n", ret);
	return 0;
}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &a, &b);
//	while (i<32)
//	{
//		if ((a & 1) != (b & 1))
//		{
//			count++;
//		}
//		i++;
//		a = a >> 1;
//		b = b >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//

//#include<stdio.h>
//int main()
//{
//	int a = 3;//3 00000000 00000000 00000000 00000011
//	int count1 = 0;
//	int count2 = 0;
//	//scanf("%d", &a);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		a = a >> 1;//00001111
//		a = a & 1;
//		printf("%d ", a);
//		a = a >> 1;
//	}
//	printf("\n");
//	a = 3;
//	for (i = 0; i < 32; i++)
//	{
//		a = a & 1;
//		printf("%d ", a);
//		a = a >> 2;
//	}
//	return 0;
//}
