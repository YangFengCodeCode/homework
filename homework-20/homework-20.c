#define _CRT_SECURE_NO_WARNINGS 1


//memcpy


#include<stdio.h>
#include<assert.h>
//void my_memcpy(void* dest, const void* sorc, size_t num)
//{
//	void* ret = dest;
//	assert(dest && sorc);
//	while (num--)
//	{
//		*(char*)dest = *(char*)sorc;
//		dest = (char*)dest + 1;
//		sorc = (char*)sorc + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int arr2[] = { 5, 6, 7, 8, 9, 10 };
//
//	my_memcpy(arr1, arr2, 21);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	
//}


//memmove


void* my_memmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	if (dest < src)
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}

	else
	{
		while (num--)
		{
			(char*)dest = (char*)src;
			dest = (char*)dest + 1;
			dest = (char*)src + 1;
		}
	}

	return ret;
}
int main()
{

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr, arr + 4, 5);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}