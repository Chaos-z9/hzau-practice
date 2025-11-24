#include<iostream>
using namespace std;
int main()
{
	int num = 0 ;
	cin >> num;
	int count = 0;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			count++;
		}
		
	}
	if (count == 0)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << 1 << endl;
	}
	return 0;
}
