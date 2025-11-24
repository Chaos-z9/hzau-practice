/*
题目内容计算阶乘之和
【问题描述】编写程序计算1！+2！+……+n！的值，即计算从1到n的阶乘之和。
【输入形式】输入一个小于100的整数n。
【输出形式】一个整数，即计算结果。
【样例输入】3
【样例输出】9
【样例说明】1！+2！+3！=9
【评分标准】使用循环实现上述计算。
*/
#include <iostream>
using namespace std;
int jiecheng(int a);
int SUM(int a);
int main()
{
	int a = 0;
	cin >> a;
	cout << SUM(a) << endl;
	return 0;
}
int jiecheng(int a)
{
	if (a == 0)
	{
		return 1;
	}
	else
	{
		/*int sum = 0;
		sum=a* jiecheng(a - 1);
		return sum;*/
		//直接返回，如果初始化的话，每一次返回都会初始化，导致计算结果为0
		return a * jiecheng(a - 1);
	}
}
int SUM(int a)
{
	int sum1 = 0 ;
	for (int i = a; i > 0; i--)
	{
		sum1 += jiecheng(i);
	}
	return sum1;//又忘写返回值了
}