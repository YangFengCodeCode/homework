#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#include<string.h>
//int main()
//{
//    string s1;
//    cin >> s1;
//    string::iterator it = s1.begin();
//    int a = 1;
//    if (*it == '+' || *it == '/' || *it == '-')
//    {
//        a = 0;
//        ++it;
//    }
//    int flag = 1;
//    while (it != s1.end())
//    {
//        if (!(*it >= '0' && *it <= '9'))
//        {
//            flag = 0;
//            break;
//        }
//        ++it;
//    }
//    if (flag == 0)
//    {
//        return 0;
//    }
//    else
//    {
//        if (a == 0)
//        {
//            string s2(s1, 1);
//        }
//        else
//        {
//            string s2(s1);
//        }
//    }
//}


//class Solution {
//public:
//    void reverseString(vector<char>& s) {
//        reverse(s.begin(), s.end());
//    }
//};



//class Solution {
//public:
//    int firstUniqChar(string s) {
//        int cout = 0;
//        int flag = 0;
//        for (int i = 0; i < s.length(); i++)
//        {
//            flag = 0;
//            int key = s[i];
//            for (int j = 0; j < s.length(); j++)
//            {
//                if (j == i)
//                {
//                    j++;
//                }
//                if (s[j] == key)
//                {
//                    flag = 1;
//                }
//            }
//            if (flag == 0)
//            {
//                break;
//            }
//            cout++;
//        }
//        if (flag == 0)
//        {
//            return cout;
//        }
//        else
//        {
//            return -1;
//        }
//
//    }
//};



int firstUniqChar(string s) 
{
    int cout = 0;
    int flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        flag = 0;
        int key = s[i];
        for (int j = 0; j < s.length(); j++)
        {
            if (j == i)
            {
                j++;
            }
            if (s[j] == key)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
        cout++;
    }
    if (flag == 0)
    {
        return cout;
    }
    else
    {
        return -1;
    }

}

int main()
{
    string s;
    cin >> s;
    int ret = firstUniqChar(s);
    cout << ret << endl;
    return 0;
}