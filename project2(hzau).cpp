//若已知三角形三个边的长度分别为 a,b,c（并假设三个边长度的单位一致，在本编程题中忽略其单位）
// 则可以利用公式 S=s(s-a)(s-b)(s-c) 求得三角形的面积，其中：s=(a+b+c)/2。编程实现从控制台读入以整数表示的三个边的长度（假设输入的长度肯定可以形成三角形）
// 然后利用上述公式计算面积并输出，结果小数点后保留 3 位有效数字。
//【输入形式】从控制台输入三个整数表示三角形三个边的长度，以空格分隔三个整数。【输出形式】向控制台输出求得的三角形的面积
// 小数点后保留三位有效数字。【输入样例】446【输出样例】7.937
#include <iostream>
#include<cmath>
using namespace std;
double area(double s, int a, int b, int c);
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	double s = (a + b + c) / 2.0;
	area(s, a, b, c);
	cout << area(s, a, b, c) << endl;
	return 0;
}
double area(double s, int a, int b, int c)
{
	double SUM= sqrt(s * (s - a) * (s - b) * (s - c));
	return SUM;
}

/*反映的问题，在函数声明和定义中，第一个参数 s应该是 double类型，但您写成了 int类型
这会导致小数部分被截断，计算结果不准确
​​缺少输出处理​​：
在 main()中调用了 area()但没有接收返回值
计算结果没有被输出到控制台*/
/*   #include <iomanip>
/ 修正3：设置输出格式，保留3位小数
	cout << fixed << setprecision(3) << result << endl;
*/