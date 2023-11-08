#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//int main()
//{
//	int year, month, day;
//	cin >> year >> month >> day;
//	int MonthDay_N[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
//	int n = MonthDay_N[month - 1] + day;
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		n += 1;
//	}
//
//	cout << n << endl;
//}
//



//class Date
//{
//protected:
//    friend ostream& operator<<(ostream& out, const Date& d);
//public:
//    Date(int year, int month, int day);
//    Date operator+(int n);
//    int GetMonthDay(int year, int month);
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//Date::Date(int year, int month, int day)
//{
//    _day = day;
//    _month = month;
//    _year = year;
//}
//ostream& operator<<(ostream& out, const Date& d)
//{
//    if (d._month < 10 && d._day < 10)
//        out << d._year << "-" << 0 << d._month << "-" << 0 << d._day;
//    else if (d._month >= 10 && d._day < 10)
//        out << d._year << "-" << d._month << "-" << 0 << d._day;
//    else if (d._month < 10 && d._day >= 10)
//        out << d._year << "-" << 0 << d._month << "-" << d._day;
//    else
//        out << d._year << "-" << d._month << "-" << d._day;
//    return out;
//}
//Date Date::operator+(int n)
//{
//    int year = _year;
//    int month = _month;
//    int day = _day;
//    day += n;
//    while (day > GetMonthDay(year, month))
//    {
//        day -= GetMonthDay(year, month);
//        month++;
//        if (month > 12)
//        {
//            year++;
//            month = 1;
//        }
//    }
//    return Date(year, month, day);
//}
//
//int Date::GetMonthDay(int year, int month)
//{
//    static int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    int day = days[month];
//    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
//    {
//        day += 1;
//    }
//    return day;
//}
//
//int main()
//{
//    int year = 0;
//    int n = 0;
//    while (scanf("%d, %d", &year, &n) != EOF)
//    {
//        int month = 1, day = 1;
//        Date d(year, month, day);
//        Date d1 = d + n;
//        cout << d1 << endl;
//    }
//    return 0;
//}



//class Date
//{
//public:
//	Date(int year, int month, int day)
//		:_year(year),
//		_month(month),
//		_day(day)
//	{
//		//初始化列表
//	}
//
//	int GetMonthDay(int year, int month)
//	{
//		int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//		if (month == 2 && ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0))
//		{
//			return arr[month] + 1;
//		}
//		return arr[month];
//	}
//
//	Date& operator+=(int day)
//	{
//		_day += day;
//		while (_day > GetMonthDay(_year, _month))
//		{
//			_day -= GetMonthDay(_year, _month);
//			_month++;
//			if (_month == 13)
//			{
//				_year++;
//				_month = 1;
//			}
//		}
//
//		return *this;
//	}
//
//	bool operator==(const Date& d)
//	{
//		return (_day == d._day && _month == d._month && _year == d._year);
//	}
//
//	bool operator!=(const Date& d)
//	{
//		return !(*this == d);
//	}
//	bool operator>(const Date& d)
//	{
//		if (_year > d._year)
//		{
//			return true;
//		}
//
//		else if (_year == d._year && _month > d._month)
//		{
//			return true;
//		}
//
//		else if (_year == d._year && _month == d._month && _day > d._day)
//		{
//			return true;
//		}
//
//		else
//			return false;
//	}
//	int operator-(Date& d)
//	{
//		Date max = *this;
//		Date min = d;
//		if (d > *this)
//		{
//			max = d;
//			min = *this;
//		}
//		int n = 0;
//		while (min != max)
//		{
//			min += 1;
//			n++;
//		}
//
//		return n;
//	}
//
//
//	void Print()
//	{
//		if (_month < 10 && _day < 10)
//			cout << _year << "-0" << _month << "-0" << _day << endl;
//		else if (_month < 10 && _day > 10)
//			cout << _year << "-0" << _month << '-' << _day<< endl;
//		else if (_month >= 10 && _day < 10)
//		{
//			cout << _year << '-' << _month << "-0" << _day<< endl;
//		}
//		else
//			cout << _year << '-' << _month << '-' << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	int year1, month1, day1;
//	int year2, month2, day2;
//	while (scanf("%04d%02d%02d\n%04d%02d%02d", &year1, &month1, &day1, &year2, &month2, &day2) != EOF)
//	{
//		Date d1(year1, month1, day1);
//		Date d2(year2, month2, day2);
//		int ret = d1 - d2;
//		cout << ret;
//	}
//	return 0;
//}



class Date
{
public:
	Date(int year, int month, int day)
		:_year(year),
		_month(month),
		_day(day)
	{
		//初始化列表
	}

	int GetMonthDay(int year, int month)
	{
		int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (month == 2 && ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0))
		{
			return arr[month] + 1;
		}
		return arr[month];
	}

	Date& operator+=(int day)
	{
		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			_month++;
			if (_month == 13)
			{
				_year++;
				_month = 1;
			}
		}

		return *this;
	}

	bool operator==(const Date& d)
	{
		return (_day == d._day && _month == d._month && _year == d._year);
	}

	bool operator!=(const Date& d)
	{
		return !(*this == d);
	}
	bool operator>(const Date& d)
	{
		if (_year > d._year)
		{
			return true;
		}

		else if (_year == d._year && _month > d._month)
		{
			return true;
		}

		else if (_year == d._year && _month == d._month && _day > d._day)
		{
			return true;
		}

		else
			return false;
	}
	int operator-(Date& d)
	{
		Date max = *this;
		Date min = d;
		if (d > *this)
		{
			max = d;
			min = *this;
		}
		int n = 0;
		while (min != max)
		{
			min += 1;
			n++;
		}

		return n;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	int year1, month1, day1;
	int year2, month2, day2;
	while (scanf("%04d%02d%02d\n%04d%02d%02d", &year1, &month1, &day1, &year2, &month2, &day2) != EOF)
	{
		Date d1(year1, month1, day1);
		Date d2(year2, month2, day2);
		int ret = d1 - d2;
		cout << ret;
	}
	return 0;
}