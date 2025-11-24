//有一个四位正整数2397（或任意数），将个数字取出，相加求和
/*解法一
#include<iostream>
using namespace std;
int main()
{
	//取模得到各位数
	int a = 0;
	cout << "请输入一个四位正整数：" << endl;
	cin >> a;
	int ge, shi, bai, qian;
	ge = a % 10;          //个位
    //修正：将中文括号（ ）改为英文括号 ( )
    shi = (a / 10) % 10;
	bai = (a / 100) % 10;
	qian = a / 1000;
	//相加
	cout << "各位数字之和为：" << ge + shi + bai + qian << endl;
	return 0;
}
*/
//解法二,函数法
#include<iostream>
using namespace std;
int SUM(int num);
int main()
{
	int a = 0;
	cout << "请输入一个四位正整数：" << endl;
	cin >> a;
	SUM(a);
	return 0;
}
int SUM(int num)
{
	int temp = num;
	int sum = 0;
	while (temp > 0)
	{
		sum += temp % 10;
				temp /= 10;
	}
	return sum;
}