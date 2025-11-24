/*
二进制转换
问题描述：请输入一个十进制正整数（最多为四位），并将其转化成一个二进制数。
注意：该二进制的各数位保存在一个一维整型数组a中。
注意：a[0]存放高位。请输入数组a。
样例输入：1234
样例输出：10011010010
*/
#include <iostream>
using namespace std;
int rev(int num);
int main()
{
	//输入四位正整数
	int num;
	cin >> num;
	rev(num);

	//转换成正序
	return 0;
}
//创建rev转换函数，将十进制数转为二进制数（逆位）
int rev(int num)
{
	int a[14];
	int i = 0;
	while (num)
	{
	a[i++] = num % 2;
	num /= 2;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		cout << a[j];
	}
	return 0;
}