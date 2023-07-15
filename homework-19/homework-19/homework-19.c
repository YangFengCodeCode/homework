#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s)
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[10] = "abcedsffs";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//#include<assert.h>
//char* my_strcpy(char* s1, const char* s2)
//{
//	char* ret = s1;
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	while (*s2 != '\0')
//	{
//		*s1 = *s2;
//		s1++;
//		s2++;
//	}
//	*s1 = *s2;
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "accsse";
//	char arr2[20] = "XXXXXXXXX";
//	char * ret = my_strcpy(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}
//

//int my_strcmp(char* dest, char* sour)
//{
//	assert(dest && sour);
//	while (* dest == *sour)
//	{
//		if (*dest == '\0')
//		{
//			return 0;
//		}
//		dest++;
//		sour++;
//	}
//	return (*dest - *sour);
//}
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[10] = "abddef";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	
//}

//char* my_strcat(char* str1, char* str2)
//{
//	char* ret = str1;
//	while (*str1)
//	{
//		str1++;
//	}
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abcders";
//	char arr2[10] = "acsaew";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


char* my_strstr(char* str1, char* str2)
{
	char* cp = str1;
	char* s1 = cp;
	char* s2 = str2;
	if (str2 == '\0')
	{
		return str1;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;
		}
		cp++;
	}
	return NULL;


}
int main()
{
	char arr1[] = "abcdersdfff";
	char arr2[] = "der";
	char* ret = my_strstr(arr1, arr2);
	if (ret != NULL)
	{
		printf("%s", ret);
	}
	else
		printf("Ã»ÕÒµ½\n");
	return 0;
}