#include <iostream>
using namespace std;
int main()
{
    int n =0;
    cin>>n;
    int k=1;
    double e=1;
    for(int i=1;i<=n;i++)
    {
     k=k*i;
     e=e+1.0/k;
    }
    cout << e << endl;
    return 0;
}
