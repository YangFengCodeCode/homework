#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//int main()
//{
//	string s("hello world");
//	size_t pos = s.find_last_of(' ');
//	cout << pos << endl;
//	return 0;
//}



///*
//
//*思路：
//
//* 1. 要考虑正负数
//
//* 2. 要考虑数据是否溢出
//
//*/
//
//class Solution {
//public:
//    int StrToInt(string str)
//    {
//        int len = str.size();
//        int flag = 1;
//        if (len == 0)
//            return 0;
//        const char* cstr = str.c_str();
//        if (cstr == NULL)
//            return 0;
//        int i = 0;
//        if (cstr[i] == '+')
//        {
//            i++;
//            flag = 1;//如果str[i]为'+'，str[i]顺序后移，并令标志flag为1，表示为正数   
//        }
//        else if (cstr[i] == '-')
//        {
//            i++;
//            flag = -1;//如果str[i]为'-'，str[i]顺序后移，并令标志flag为-1，表示为负数   
//        }
//        long long num = 0;
//        while (cstr[i] != '\0')
//        {
//            if (cstr[i] >= '0' && cstr[i] <= '9')
//            {
//                //每遍历一个在0-9间的字符，就将其输入到num中       
//                num = num * 10 + (cstr[i] - '0');//下一次输入到num中时要加上上一次*10的结果，即上一次的数左移一位（十进制下） 
//                //如果数据溢出，则返回0
//
//                if ((flag > 0 && num > 0x7fffffff) || (flag < 0 && num>0x80000000))
//                    return 0;
//                i++;
//            }
//            else
//            {
//                return 0;
//            }
//        }
//
//        if (flag < 0)
//            num = num * -1;
//        return (int)num;
//    }
//};



//int solution()
//{
//    string s;
//    cin >> s;
//    if (s.size() == 0)
//    {
//        return 0;
//    }
//    for (int i = 1; i < s.size(); i++)
//    {
//        if (!(s[i] > '0' && s[i] < '9'))
//        {
//            return 0;
//        }
//    }
//    size_t pos1 = s.find_first_of("+/-");
//    if (s.size() == 1)
//    {
//        if (pos1 == 1 || s[0] != '+' || s[0] != '/' || s[0] != '-')
//        {
//            return 0;
//        }
//        else
//        {
//            return stoi(s);
//        }
//    }
//
//    else
//    {
//        size_t pos2 = s.find_first_of("+/-", 1);
//        if (pos2 != string::npos)
//        {
//            return 0;
//        }
//        else if (pos1 == string::npos)
//        {
//            return stoi(s);
//        }
//        else
//        {
//            s.erase(s.begin());
//            return stoi(s);
//        }
//    }
//}
//
//int main()
//{
//    int ret = solution();
//    cout << ret << endl;
//}


//class Solution {
//public:
//    void reverseString(vector<char>& s) {
//        reverse(s.begin(), s.end());
//    }
//};


//int main()
//{
//	string strText = "How are you?";
//	string strSeparator = " ";
//	string strResult;
//	int size_pos = 0;
//	int size_prev_pos = 0;
//
//	while ((size_pos = strText.find_first_of(strSeparator, size_pos)) != string::npos)
//	{
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//		cout << strResult << " ";
//		size_prev_pos = ++size_pos;
//	}
//
//	if (size_prev_pos != strText.size())
//	{
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//		cout << strResult << " ";
//	}
//
//	cout << endl;
//	return 0;
//
//}
//


//int main()
//{
//	string s("hello world!");
//	reverse(1, 2);
//	cout << s << endl;
//	return 0;
//}


//class Solution {
//public:
//
//    //翻转start到end区间的字符串
//    void Reverse(string& s, int start, int end)
//    {
//        char tmp;
//        end--;
//        while (start < end)
//        {
//            tmp = s[start];
//            s[start] = s[end];
//            s[end] = tmp;
//            start++;
//            end--;
//        }
//    }
//
//    string reverseStr(string s, int k)
//    {
//        int len = s.size();
//        for (int i = 0; i < len; i += 2 * k)
//        {
//            if (i + k < len)
//                Reverse(s, i, i + k);
//            else
//                Reverse(s, i, len);
//        }
//        return s;
//    }
//
//};


//string multiply(string num1, string num2) {
//    string strNumber;
//    int end1 = num1.size() - 1;
//    int end2 = num2.size() - 1;
//    long long int val1 = 0;
//    long long int val2 = 0;
//    long long int i = 1;
//    int a = 0;
//    while (end1 >= 0)
//    {
//        a = num1[end1--] - '0';
//        val1 += (a * i);
//        i *= 10;
//    }
//    i = 1;
//    a = 0;
//    while (end2 >= 0)
//    {
//        a = num2[end2--] - '0';
//        val2 += (a * i);
//        i *= 10;
//    }
//
//    long long int val = val1 * val2;
//    while (val / 10 != 0)
//    {
//        strNumber += (val % 10 + '0');
//        val /= 10;
//    }
//    strNumber += ('0' + val);
//    reverse(strNumber.begin(), strNumber.end());
//    return strNumber;
//
//}


/*

*思路：

* 1. 下翻转数据

* 2. 按位相乘

* 3. 将乘得的结果进行错位相加，模拟乘法的笔算过程

*/

class Solution
{
public:
    void MulItem(string& tmp, string& num1, char a)
    {
        int i = 0, sign = 0;
        int mul = 0;
        while (i < num1.size())
        {

            mul = (num1[i] - '0') * (a - '0') + sign;
            if (mul >= 10)
            {
                sign = mul / 10;
                mul %= 10;
            }
            else
                sign = 0;
            tmp.push_back(mul + '0');
            i++;
        }
        if (sign > 0)
            tmp.push_back(sign + '0');
    }

    //对应为相加，sign进位采用引用传递

    int AddItem(int a, int b, int& sign)
    {

        int add = a + b + sign;
        if (add >= 10)
        {
            sign = 1;
            add -= 10;
        }

        else
            sign = 0;
        return add;
    }

    //错位相加
    void MoveAdd(string& result, string& tmp, int k)
    {
        int i, j;
        i = k;
        j = 0;
        int sign = 0;

        while (i < result.size() && j < tmp.size())
        {
            result[i] = AddItem(result[i] - '0', tmp[j] - '0', sign) + '0';
            i++;
            j++;
        }

        while (i < result.size() && sign)
        {
            result[i] = AddItem(result[i] - '0', 0, sign) + '0';
            i++;
        }

        while (j < tmp.size())
        {
            int v = AddItem(0, tmp[j] - '0', sign);

            result.push_back(v + '0');

            j++;

        }

        if (sign)

            result.push_back(sign + '0');
    }

    string multiply(string num1, string num2)
    {
        //先翻转数据，方便进位处理
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        string tmp, result;

        for (int i = 0; i < num2.size(); ++i)
        {
            //使用num2的每一个数据乘以num1
            MulItem(tmp, num1, num2[i]);
            //将乘得的结果进行错位相加
            MoveAdd(result, tmp, i);
            tmp.clear();
        }

        while (result.size() != 1 && result.back() == '0')
            result.pop_back();
        //翻转数据，恢复数据
        reverse(result.begin(), result.end());
        return result;
    }
};