#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	int num;
	cin >> num;
	int temp = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == num)
		{
			for (int j = i; j < 9; j++)
			{
				arr[j] = arr[j + 1];
			}
			temp++;
			
		}
	}

	if (temp == 0)
	{
		cout << "No date" << endl;
	}
	else
	{
	
	     for (int i = 0; i < 9; i++)
	     {
		      cout << arr[i] << " ";
	     }
    }

	return 0;
}
//可以试试双指针的方法
//这个程序有点问题，当输入的数字有多个时，只会删除第一个
/*
for (int i = 0; i < 10; i++)
	{
		if (arr[i] == num)
		{
			for (int j = i; j < 9; j++)
			{
				arr[j] = arr[j + 1];
			}
			temp++;
			goto FLAG;
		}
	}
FLAG:
*/