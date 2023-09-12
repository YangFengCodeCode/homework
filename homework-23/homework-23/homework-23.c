#define _CRT_SECURE_NO_WARNINGS 

//#include<stdio.h>
//int missingNumber(int* nums, int numsSize) {
//    int x = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        x ^= *(nums + i);
//    }
//    for (int i = 0; i < numsSize + 1; i++)
//    {
//        x ^= i;
//    }
//    return x;
//}


void reverse(int* a, int left, int right)
{
    while (left < right)
    {
        int tmp = a[left];
        a[left] = a[right];
        a[right] = tmp;
        ++left;
        --right;
    }
}
void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;
    reverse(nums, 0, numsSize - k - 1);
    reverse(nums, numsSize - k, numsSize - 1);
    reverse(nums, 0, numsSize - 1);

}




void Func2(int N)
{
    int count = 0;
    for (int k = 0; k < 2 * N; ++k)
    {
        ++count;
    }
    int M = 10;
    while (M--)
    {
        ++count;
    }
    printf("%d\n", count);
}


// ����Func3��ʱ�临�Ӷȣ�
void Func3(int N, int M)
{
    int count = 0;
    for (int k = 0; k < M; ++k)
    {
        ++count;
    }
    for (int k = 0; k < N; ++k)
    {
        ++count;
    }
    printf("%d\n", count);
}



// ����Func4��ʱ�临�Ӷȣ�
void Func4(int N)
{
    int count = 0;
    for (int k = 0; k < 100; ++k)
    {
        ++count;
    }
    printf("%d\n", count);
}



// ����strchr��ʱ�临�Ӷȣ�
const char* strchr(const char* str, int character);

// ����BubbleSort��ʱ�临�Ӷȣ�
void BubbleSort(int* a, int n)
{
    assert(a);
    for (size_t end = n; end > 0; --end)
    {
        int exchange = 0;
        for (size_t i = 1; i < end; ++i)
        {
            if (a[i - 1] > a[i])
            {
                Swap(&a[i - 1], &a[i]);
                exchange = 1;
            }
        }
        if (exchange == 0)
            break;
    }
}



// ����Fibonacci�Ŀռ临�Ӷȣ�
// ����쳲��������е�ǰn��
long long* Fibonacci(size_t n)
{
 if(n==0)
 return NULL;
 
 long long * fibArray = (long long *)malloc((n+1) * sizeof(long long));
 fibArray[0] = 0;
 fibArray[1] = 1;
 for (int i = 2; i <= n ; ++i)
 {
 fibArray[i] = fibArray[i - 1] + fibArray [i - 2];
 }
 return fibArray;
}


// ����BinarySearch��ʱ�临�Ӷȣ�
int BinarySearch(int* a, int n, int x)
{
    assert(a);
    int begin = 0;
    int end = n - 1;
    // [begin, end]��begin��end������ұ����䣬�����=��
    while (begin <= end)
    {
        int mid = begin + ((end - begin) >> 1);
        if (a[mid] < x)
            begin = mid + 1;
        else if (a[mid] > x)
            end = mid - 1;
        else
            return mid;
    }
    return -1;
}



// ����׳˵ݹ�Fac��ʱ�临�Ӷȣ�
long long Fac(size_t N)
{
    if (0 == N)
        return 1;

    return Fac(N - 1) * N;
}


// ����쳲������ݹ�Fib��ʱ�临�Ӷȣ�
long long Fib(size_t N)
{
    if (N < 3)
        return 1;

    return Fib(N - 1) + Fib(N - 2);
}


//�ռ临�Ӷ�
//�ռ临�Ӷ�Ҳ��һ����ѧ���ʽ���Ƕ�һ���㷨�����й�������ʱռ�ô洢�ռ��С������ ��
//�ռ临�ӶȲ��ǳ���ռ���˶���bytes�Ŀռ䣬��Ϊ���Ҳû̫�����壬���Կռ临�Ӷ�����Ǳ����ĸ�����
//�ռ临�Ӷȼ�����������ʵ�����Ӷ����ƣ�Ҳʹ�ô�O������ʾ����
//ע�⣺��������ʱ����Ҫ��ջ�ռ�(�洢�������ֲ�������һЩ�Ĵ�����Ϣ��)�ڱ����ڼ��Ѿ�ȷ�����ˣ���
//�˿ռ临�Ӷ���Ҫͨ������������ʱ����ʽ����Ķ���ռ���ȷ��





// ����Fibonacci�Ŀռ临�Ӷȣ�
// ����쳲��������е�ǰn��
long long* Fibonacci(size_t n)
{
    if (n == 0)
        return NULL;

    long long* fibArray = (long long*)malloc((n + 1) * sizeof(long long));
    fibArray[0] = 0;
    fibArray[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }
    return fibArray;
}