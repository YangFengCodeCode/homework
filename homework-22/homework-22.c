#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//void FindSingle(int* p)
//{
//
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//
//	FindSingle(arr);
//}


#include<stdio.h>
#include<assert.h>
char* my_strncpy(char* dest, const char* src, size_t n)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (n)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	return ret;
}

int main()
{
	char arr[20] = { 0 };
	char* p = "bit";
	int n = 0;
	printf("请输入拷贝的字符个数：\n");
	scanf("%d", &n);
	char* ret = my_strncpy(arr, p, n);
	printf("%s\n", ret);
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strncat(char* dst, const char* src, size_t count)
{
	assert(NULL != dst && NULL != src);
	char* ret = dst;
	while (*dst)
	{
		dst++;
	}
	while (count-- && *src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return ret;
}
int main()
{
	char s[30] = "hello";
	char ct[10] = "welcome";
	printf("%s", my_strncat(s, ct, 2));
	return 0;
}
