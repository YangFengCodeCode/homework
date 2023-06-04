//写一个函数求两个整数的较大值

//如：输入：10 20
//
//输出较大值：20


//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	if (a < b)
//		printf("%d", b);
//	else
//		printf("%d", a);
//	return 0;
//}

//小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）
//
//输入描述：
//输入包含一个整数n(0 ≤ n ≤ 109)
//
//输出描述：
//输出一个整数，即小乐乐到达楼上需要的时间。
//示例1
//输入：
//1
//输出：
//2
//示例2
//输入：
//12
//输出：6

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	a = a / 12 * 4 + 2;
//	printf("%d\n", a);
//	return 0;
//}

//描述
//KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//输入描述：
//题目有多组输入数据，每一行输入三个a，b，c(0 < a, b, c < 1000)，作为三角形的三个边，用空格分隔。
//输出描述：
//针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。
//示例1
//输入：
//2 3 2
//3 3 3
//输出：
//Isosceles triangle!
//Equilateral triangle!

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (~scanf_s("%d %d %d", &a, &b, &c))
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}


//描述
//问题：计算BMI指数（身体质量指数）。BMI指数（即身体质量指数，简称体质指数又称体重，英文为Body Mass Index，简称BMI），是用体重公斤数除以身高米数平方得出的数字，是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。主要用于统计用途，当我们需要比较及分析一个人的体重对于不同高度的人所带来的健康影响时，BMI值是一个中立而可靠的指标。
//
//50≤n≤180
//
//输入描述：
//一行，两个整数，分别表示体重（公斤），身高（厘米），中间用一个空格分隔。
//输出描述：
//一行，BMI指数（保留两位小数）
// 输入：
//70 170

//输出：
//24.22


//#include<stdio.h>
//int main()
//{
//	int w = 0;
//	int h = 0;
//	double BMI = 0;
//	scanf_s("%d %d", &w, &h);
//	BMI = w / ((h / 100.0) * (h / 100.0));// 如果180/100 我们只能得到1 如果我们要保留后面小数 就要写成100.0
//
//	
//	printf("%0.2f\n", BMI);// 0.2 保留两位小数
//	return 0;
//}





//描述
//问题：一年约有 3.156×107 s，要求输入您的年龄，显示该年龄合多少秒。
//
//数据范围：
//0
//<
//	�
//	�
//	�
//	≤
//	200
//
//	0 < age≤200
//
//	输入描述：
//	一行，包括一个整数age。
//	输出描述：
//	一行，包含一个整数，输出年龄对应的秒数。
//	示例1
//	输入：
//	20
//	复制
//	输出：
//	631200000
#include <stdio.h>
int main()
{
	int age = 0;

	scanf_s("%d", &age);
	long long time = age * 31560000;
	printf("%lld\n", time);

	return 0;
}

//
//#include<stdio.h>
//int main()
//{
//	double a = 0;
//	a = 174 / 100.0;
//	printf("%0.3f", a);
//	return 0;
//}
//


