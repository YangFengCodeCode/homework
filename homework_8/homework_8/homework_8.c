//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

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


//ʵ��һ�������������������������ݡ�

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
//	printf("����ǰa = %d, b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("������a = %d, b = %d\n", a, b);
//	return 0;
//}


//ʵ�ֺ����ж�year�ǲ�������

//#include<stdio.h>
//
//void run(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0)
//		printf("%d������\n", x);
//	else if (x % 400 == 0)
//		printf("%d������\n",x);
//	else
//		printf("��������\n");
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	run(a);
//	return 0;
//}



//ʵ��һ���������ж�һ�����ǲ���������
//
//��������ʵ�ֵĺ�����ӡ100��200֮���������

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
//        int flag = 1;//����flag = 1 Ϊ����
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