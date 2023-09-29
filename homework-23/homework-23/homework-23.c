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


// 计算Func3的时间复杂度？
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



// 计算Func4的时间复杂度？
void Func4(int N)
{
    int count = 0;
    for (int k = 0; k < 100; ++k)
    {
        ++count;
    }
    printf("%d\n", count);
}



// 计算strchr的时间复杂度？
const char* strchr(const char* str, int character);

// 计算BubbleSort的时间复杂度？
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



// 计算Fibonacci的空间复杂度？
// 返回斐波那契数列的前n项
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


// 计算BinarySearch的时间复杂度？
int BinarySearch(int* a, int n, int x)
{
    assert(a);
    int begin = 0;
    int end = n - 1;
    // [begin, end]：begin和end是左闭右闭区间，因此有=号
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



// 计算阶乘递归Fac的时间复杂度？
long long Fac(size_t N)
{
    if (0 == N)
        return 1;

    return Fac(N - 1) * N;
}


// 计算斐波那契递归Fib的时间复杂度？
long long Fib(size_t N)
{
    if (N < 3)
        return 1;

    return Fib(N - 1) + Fib(N - 2);
}


//空间复杂度
//空间复杂度也是一个数学表达式，是对一个算法在运行过程中临时占用存储空间大小的量度 。
//空间复杂度不是程序占用了多少bytes的空间，因为这个也没太大意义，所以空间复杂度算的是变量的个数。
//空间复杂度计算规则基本跟实践复杂度类似，也使用大O渐进表示法。
//注意：函数运行时所需要的栈空间(存储参数、局部变量、一些寄存器信息等)在编译期间已经确定好了，因
//此空间复杂度主要通过函数在运行时候显式申请的额外空间来确定





// 计算Fibonacci的空间复杂度？
// 返回斐波那契数列的前n项
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