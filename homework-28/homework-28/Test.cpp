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

	//��ӦΪ��ӣ�sign��λ�������ô���
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

	//��λ���
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
		//�ȷ�ת���ݣ������λ����
		reverse(num1.begin(), num1.end());
		reverse(num2.begin(), num2.end());
		string tmp, result;

		for (int i = 0; i < num2.size(); ++i)
		{
			//ʹ���ݳ���num1
			MulItem(tmp, num1, num2[i]);
			//���˵õĽ�����д�λ���
			MoveAdd(result, tmp, i);
			tmp.clear();
		}

		while (result.size() != 1 && result.back() == '0')
			result.pop_back();
		//��ת���ݣ��ָ�����
		reverse(result.begin(), result.end());
		return result;
	}
};



/*
�����ж��ֽ���˼·�����磺
  1. ͳ��ÿ�����ֳ��ֵĴ�����Ȼ���ҳ�ֻ����1�ε����֣�ȱ�㣺��Ҫ���������ռ�
  2. �����ݽ�������Ȼ���ҳ�ֻ����1�ε����֣�ȱ�㣺ʱ�临�ӶȲ���O(N)
����ĿҪ���ˣ�ʱ�临�Ӷȱ���ΪO(N)����ʱ�临�Ӷȣ���˱���������Ŀ���Ѷȡ�


��Ŀ˵��ֻ��һ�����ֳ���һ�Σ��������־�����3�Σ���������Ϊ{3,5,3,3}
ͨ��������֪��
3�Ķ����ƣ�0 0 0 0 0 0 1 1
5�Ķ����ƣ�0 0 0 0 0 1 0 1
3�Ķ����ƣ�0 0 0 0 0 0 1 1
3�Ķ����ƣ�0 0 0 0 0 0 1 1
		  0 0 0 0 0 1 3 4  ������1������
���ڳ���3�ε����֣���λ���ֵĴ�������3�ı�������˶�ͳ�Ƶ�Ϊ1�ı�������%3
		  0 0 0 0 0 1 0 1 = 5
		  �������ֻ����һ�ε�����
*/


// ʱ�临�Ӷȣ�O(32*N)--->O(N)  �ռ临�Ӷȣ�O(1)
class Solution2{
public:
	int singleNumber(vector<int>& nums) {
		int ans = 0;
		for (int i = 0; i < 32; ++i) {


			// ͳ�Ƹ�ÿ�����ֵ�i������λΪ1������
			int total = 0;
			for (int num : nums) {
				total += ((num >> i) & 1);
			}


			// ���total�ܹ���3������˵��ֻ����һ�ε������ڸ�λ����һ����0
			// �����ڸ�λ����һ����1
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
		// ͳ�Ƹ�ÿ�����ֵ�i������λΪ1������
		int total = 0;
		for (int num : nums) {
			total += ((num >> i) & 1);
		}

		// ���total�ܹ���3������˵��ֻ����һ�ε������ڸ�λ����һ����0
		// �����ڸ�λ����һ����1
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

