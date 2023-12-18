#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

//vector<int>::iterator Find(vector<int>&v, int val)
//{
//	vector<int>::iterator pos = find(v.begin(), v.end(), val);
//	return pos;
//}
//
//int main()
//{
//	vector<int> nums{ 2,2,3,2 };
//	vector<int>::iterator it = nums.begin();
//	vector<int>::iterator pos = Find(nums, 2);
//	cout << *pos;
//
//	string s("hello world");
//	string::iterator itt = s.begin();
//	while (itt != s.end())
//	{
//		cout << *itt << ' ';
//	}
//	cout << endl;
//
//
//	return 0;
//}


class Solution1
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
			//使数据乘以num1
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



/*
该题有多种解题思路，比如：
  1. 统计每个数字出现的次数，然后找出只出现1次的数字，缺点：需要借助辅助空间
  2. 对数据进行排序，然后找出只出现1次的数字，缺点：时间复杂度不是O(N)
而题目要求了，时间复杂度必须为O(N)线性时间复杂度，因此便增加了题目的难度。


题目说：只有一个数字出现一次，其余数字均出现3次，假设数组为{3,5,3,3}
通过分析可知：
3的二进制：0 0 0 0 0 0 1 1
5的二进制：0 0 0 0 0 1 0 1
3的二进制：0 0 0 0 0 0 1 1
3的二进制：0 0 0 0 0 0 1 1
		  0 0 0 0 0 1 3 4  二进制1的总数
对于出现3次的数字，各位出现的次数都是3的倍数，因此对统计的为1的比特总数%3
		  0 0 0 0 0 1 0 1 = 5
		  结果就是只出现一次的数字
*/


// 时间复杂度：O(32*N)--->O(N)  空间复杂度：O(1)
class Solution2{
public:
	int singleNumber(vector<int>& nums) {
		int ans = 0;
		for (int i = 0; i < 32; ++i) {


			// 统计该每个数字第i个比特位为1的总数
			int total = 0;
			for (int num : nums) {
				total += ((num >> i) & 1);
			}


			// 如果total能够被3整除，说明只出现一次的数字在该位置上一定是0
			// 否则在该位置上一定是1
			if (total % 3) {
				ans |= (1 << i);
			}
		}
		return ans;
	}
};


int main()
{
	vector<int> nums = { 3, 5, 3, 3 };
	int ans = 0;
	for (int i = 0; i < 32; ++i) {
		// 统计该每个数字第i个比特位为1的总数
		int total = 0;
		for (int num : nums) {
			total += ((num >> i) & 1);
		}

		// 如果total能够被3整除，说明只出现一次的数字在该位置上一定是0
		// 否则在该位置上一定是1
		if (total % 3) {
			ans |= (1 << i);
		}
	}
	printf("%d", ans);
	return 0;
}






class Solution3
{
public:

	vector<int> singleNumber(vector<int>& nums)
	{
		sort(nums.begin(), nums.end());
		vector<int> res;
		int i = 0;
		for (; i < nums.size() - 1; )
		{
			if (nums[i] == nums[i + 1])
			{
				i += 2;
			}
			else
			{
				res.push_back(nums[i]);
				i += 1;
			}
		}

		if (i < nums.size())
		{
			res.push_back(nums[i]);
		}
		return res;
	}
};

