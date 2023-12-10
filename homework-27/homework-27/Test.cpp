#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
using namespace std;

//int main()
//{
//    vector<int> nums = { 0,0,1,1,1,2,2,3,3,4 };
//    /*int arr[10000] = { 0 };
//    for (auto e : nums)
//    {
//        arr[e] += 1;
//    }
//
//    vector<int>::iterator it = nums.begin();
//    int i = 1;
//    while (it != nums.end())
//    {
//        if (arr[*it] > 1)
//        {
//            size_t pos = *it;
//            nums.erase(it);
//            arr[pos] -= 1;
//        }
//        it = nums.begin()+i;
//        i++;
//    }
//
//    for (auto e : nums)
//    {
//        cout << e << ' ';
//    }*/
//
//
//    vector<int>::iterator it = nums.begin();
//    vector<int>::iterator next = it + 1;
//    while (next != nums.end())
//    {
//        if (*next == *it)
//        {
//            nums.erase(next);
//            next = it + 1;
//        }
//        else
//        {
//            it++;
//            next = it + 1;
//        }
//
//    }
//    for (auto e : nums)
//    {
//        cout << e << ' ';
//    }
//
//	return 0;
//}
//


class Solution {
public:
    string _numToStr[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

    void Combine(const string& digits, int di, string cbstr, vector<string>& v)
    {
        if (di == digits.size())
        {
            v.push_back(cbstr);
            return;
        }
        int num = digits[di] - '0';
        string str = _numToStr[num];
        for (size_t i = 0; i < str.size(); ++i)
        {
            Combine(digits, di + 1, cbstr + str[i], v);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> v;
        if (digits.empty())
        {
            return v;
        }
        Combine(digits, 0, "", v);
        return v;

    }
};



class Solution2 {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>::iterator it = nums.begin();
        while (it != nums.end())
        {
            vector<int>::iterator pos = find(it + 1, nums.end(), *it);
            if (pos == nums.end())
            {
                break;
            }
            else
            {
                nums.erase(pos);
            }
            ++it;
        }
        return *it;
    }
};


class Solution3
{
public:
    int singleNumber(vector<int>& nums)
    {  
        int value = 0;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            value ^= nums[i];
        } 
        return value;
    }
};


  