//描述
//小乐乐比较懒惰，他现在想睡觉，然后再去学习。他知道现在的时刻，以及自己要睡的时长，想设定一个闹钟叫他起床学习，但是他太笨了，不知道应该把闹钟设定在哪个时刻，请你帮助他。(只考虑时和分，不考虑日期)
//
//输入描述：
//输入现在的时刻以及要睡的时长k（单位：minute），中间用空格分开。
//
//输入格式：hour : minute k(如hour或minute的值为1，输入为1，而不是01)
//
//(0 ≤ hour ≤ 23，0 ≤ minute ≤ 59，1 ≤ k ≤ 109)
//
//输出描述：
//对于每组输入，输出闹钟应该设定的时刻，输出格式为标准时刻表示法（即时和分都是由两位表示，位数不够用前导0补齐）。
//示例1
//输入：
//0:0 100

//输出：
//01 : 40

//示例2
//输入：
//1 : 0 200
//复制
//输出：
//04 : 20

//#include<stdio.h>
//int main()
//{
//    int h = 0;
//    int m = 0;
//    int k = 0;
//    scanf_s("%d:%d %d", &h, &m, &k);
//    h = (h + (m + k) / 60) % 24;
//    m = (m + k) % 60;
//    printf("%02d:%02d\n", h, m);//02的意思是如果输出的整数型不足两位， 左侧用0补齐
//    return 0;
//}



//描述
//BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。BoBo出了一个问题给KiKi，输入一个字符，输出该字符相应的ASCII码。
//输入描述：
//一行，一个字符。
//输出描述：
//一行，输出输入字符对应的ASCII码。
//示例1
//输入：
//c
//输出：
//99
#include<stdio.h>
int main()
{
	char ch = 0;
	scanf_s("%c", &ch);
	printf("%d\n", ch);
	return 0;
}