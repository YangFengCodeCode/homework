//1 �����������һ������
//
//2 ������
//
//a.�µ��� ���Ѳ´��� ������
//
//b.��С�� ���Ѳ�С�� ������
//
//c.�¶��� ��ϲ�� �¶��� ������Ϸ
//
//3 ����һ�Ѳ������Լ����� �����˳���Ϸ

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.play 0.exit*****\n");
//	printf("***********************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	printf("�²�����>:\n");
//	int guess = 0;
//	
//	while(1)
//	{
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//			
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//			
//		}
//		else
//		{
//			printf("��ϲ��¶��ˣ�\n");
//			break;
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		srand((unsigned int)time(NULL));
//		scanf("%d", &input);
//
//		switch (input)
//	    {
//		case 1:
//		
//			printf("��������Ϸ\n");
//			game();
//			break;
//		
//		case 0:
//			printf("�˳���Ϸ\n");
//		    break;
//		
//		default:
//			printf("ѡ�����\n");
//		    break;
//		
//	    }
//	} while (input);
//}

#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	long long int i = 0;
//	long long int n = 0;
//	long long int sum = 0;
//	scanf("%lld", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%lld\n", sum);
//	return 0;
//}


//#include<stdio.h>
//int get_MAX(int x, int y)
//{
//	if (x > y)
//	return x;
//	else
//	return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	int MAX1 = get_MAX(a, b);
//	int MAX2 = get_MAX(c, d);
//	int MAX = get_MAX(MAX1, MAX2);
//	printf("%d\n", MAX);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	int a = 0;
//	while(scanf("%d %c", &a, &ch) !=EOF);
//	{
//		if(a
//
//	}
//	
//	
//	return 0;
//}


#include<stdio.h>
int main()
{
	double m = 0;
	int month = 0;
	int day = 0;
	int k = 0;
	float cost = 0;
	scanf("%lf %d %d %d", &m, &month, &day, &k);
	if (month == 11 && day == 11)
	{
		if (k == 1)
			cost = m * (7 / 10.0) - 50;
		if(k == 0)
			cost = m * (7 / 10.0);

	}
	if (month == 12 && day == 12)
	{
		if (k == 1)
			cost = m * (8 / 10.0) - 50;
		if (k == 0)
			cost = m * (8 / 10.0);
	}
	if (cost <= 0)
	{
		printf("0.00\n");
	}
	if(cost > 0)
	printf("%.2lf\n", cost);
	return 0;
}