#include <iostream>
using namespace std;
int main()
{
    int arr[1000]={0};
    int count1=0;
    int sum=0;
    for(int i=;i<1001;i++)
    {
        for(int j=i-1;j>0;j--)
        {
            if(i%j==0)
            {
                arr[count1]=j;
                count1++;
            }
        }
        for(int a=0; a<1000;a++)
        {
        sum+=arr[a];
        }
        if(sum==i)
        {
            cout<<i<<" "<<"its factors are";
            for(int k=0;k<1000;k++)
            {
                if(arr[k]!=0)
                {
                    cout<<","<<arr[k];
                }
            }
            cout<<endl;
        }
        count1=0;
        arr[1000]={0};
        sum=0;
    }

    return 0;
}
