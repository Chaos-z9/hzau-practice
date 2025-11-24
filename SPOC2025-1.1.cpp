#include <iostream>
using namespace std;
int main()
{
    //input n
    int n=0;
    cin>>n;
    //output the first part
    for(int i = 1;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
         cout<<" ";
        }
         for(int j=1;j<i;j++)
        {
         cout<<j;
        }
        for(int j=i;j>0;j--)
        {
         cout<<i;
        }
        cout<<endl;
    }
    //output the second part

    return 0;
}
