/*
题目内容求两个数的最大公约数
【问题描述】给出两个自然数，求出他们的最大公约数。
【输入形式】两个自然数（用空格隔开）。
【输出形式】一个自然数，即输入自然数的最大公约数
【样例输入】6 8
【样例输出】2
【样例说明】6和8的最大公约数为2
【评分标准】使用穷举法即可。
*/
/*初级做法，全都写在main函数中
#include<iostream>
using namespace std;
int main()
{
	int a, b = 0;
	cin >> a >> b;
	if (a > b)
	{
		for (int i = b; i > 0; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				cout << i;
				break;
			}
		}
	}
	else
	{
		for (int i = a; i > 0; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				cout << i;
				break;
			}
		}
	}
	return 0;
}
*/
//进阶做法，封装函数
#include<iostream>
using namespace std;
int zhishu1(int a, int b);
int zhishu2(int a, int b);
int main()
{
	int a, b = 0;
	cin >> a >> b;
	//主函数必须也输出
	cout << zhishu1(a, b) << endl;
	return 0;
}
//辗转相除法(递归)
int zhishu1(int a, int b)
{
	if (a % b == 0)
		return b;
	else
		return zhishu1(b, a % b);
}
//穷举法
int zhishu2(int a, int b)
{
	if (a > b)
	{
		for (int i = b; i > 0; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				return i;
				//break;多余
			}
		}
	}
	else
	{
		for (int i = a; i > 0; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				return i;
				//break;多余
			}
		}
	}
	return 1;
}
//所以函数末尾要加上return 1;，防止没有返回值的情况
/* 
更简洁的穷举法实现
int zhishu2(int a, int b)
{
	int min_val = (a < b) ? a : b;
	for (int i = min_val; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}
	return 1;
}
*/