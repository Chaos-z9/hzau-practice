#include <iostream>

using namespace std;

int main()

{
	cout << "计算BMI体质指数" << endl;

	float a = 0;

	cout << "请输入体重（kg）a=" << endl;

	cin >> a;

	float b = 0;            //记得加分号

	cout << "请输入身高(m)b=" << endl;

	cin >> b;

	cout << "你的BMI体质指数=" << a / (b * b) << endl;


	//编写中出现的错误
	//cout << "你的BMI体质指数=" << a / (b * b) << endl;     在这一步 a / (b * b)中运算语法错误




	system("pause");

	return 0;
}