/*
计算反序数（循环和函数）
【问题描述】编写函数，参数为一个整数，返回这个整数的反序数，例如参数是1576，返回一个整数6751，如是1230，则返回321。
在main函数中调用此函数，并将结果输出。函数声明如下：int reverse(int num);
【输入形式】一个整数
【输出形式】它的反序数
【样例输入】
23
100
【样例输出】
32
1
*/
//测试CODE
// 测试目的：测试001的输出
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cin >>num;
//	cout << num ;
//	return 0;
//}

#include<iostream>
using namespace std;
int reverse(int num);
int main()
{
	int num;
	cin >>num;
	int result = reverse(num);
	cout << result << endl;
	return 0;
}
int reverse(int num)
{
	int rev = 0;
	if (num > 0)
	{
		while (num > 0)
		{
			rev = rev * 10 + num % 10;
			num /= 10;
		}
	}
	else
	{
		num = -num;
		while (num > 0)
		{
			rev = rev * 10 + num % 10;
			num /= 10;
		}
		rev = -rev;
	}
	return rev;
}



