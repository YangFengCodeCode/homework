#define _CRT_SECURE_NO_WARNINGS
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define OFFSETOF(structtype,membername) (int)(&(((structtype*)0)->membername))
//struct stu
//{
//	char a;
//	char b;
//	int c;
//};
//int main()
//{
//	printf("%d", OFFSETOF(struct stu, a));
//	printf("%d", OFFSETOF(struct stu, b));
//	printf("%d", OFFSETOF(struct stu, c));
//	return 0;
//}
///*#define offsetof(StructType, MemberName) (size_t)&(((StructType *)0)->MemberName)
//StructType�ǽṹ����������MemberName�ǳ�Ա����������������ǣ�
//
//1���Ƚ�0ת��Ϊһ���ṹ�����͵�ָ�룬�൱��ĳ���ṹ����׵�ַ��0����ʱ��
//ÿһ����Ա��ƫ�����ͳ������0��ƫ�����������Ͳ���Ҫ��ȥ�׵�ַ�ˡ�
//
//2���Ը�ָ����->�������Ա����ȡ����ַ�����ڽṹ����ʼ��ַΪ0��
//��ʱ��Աƫ����ֱ���൱�ڶ�0��ƫ���������Եõ���ֱֵ�Ӿ��Ƕ��׵�ַ��ƫ������
//
//3��ȡ���ó�Ա�ĵ�ַ��ǿת��size_t����ӡ������������ƫ������*/



#include<stdio.h>
#define SWAP(n) (((n&0xaaaaaaaa)>>1)+((n&0x55555555)<<1))
int main()
{

	int n = SWAP(10);
	printf("%d\n", n);
	return 0;
}
//https://blog.csdn.net/HBINen/article/details/123165967