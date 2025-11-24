#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[1000]={0};
    int res[1000]={0};
    int count1=0;
    for(int i = n-1;i>0;i--)
    {
        if(n%i==0)
        {
          arr[count1]=i;
          count1++;
        }
    }
    int count2=0;
    int k=0;
    for(int i=0;i<1000;i++)
    {
        for(int j=arr[i]-1;j>1;j--)
        {
            if(arr[i]%j==0)
            {
                count2++;
            }
        }
        if(count2==1)
        {
            res[k]=i;
            k++;
        }
        count2=0;
    }
for(int i=0;i<1000;i++)
{
    if(res[i]!=0)
    {
        cout<<res[i]<<" ";
    }
}
    return 0;
}
