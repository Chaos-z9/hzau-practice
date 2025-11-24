#include <iostream>
#include<string>
#include<cctype>
using namespace std;
struct Candidate
{
    string name ;
    int vote;
};
int main()
{
struct Candidate array[3]=
{
    {"zhang",0},
    {"li",0},
    {"wang",0}
};
int error =0;
for(int v=0;v<10;v++)
{
string inp ;
cin>>inp;
for(int i = 0 ; i<inp.size();i++)
{
    inp[i]=tolower(inp[i]);
}
if(inp=="zhang")
{
 array[0].vote++;
}
else if(inp == "li")
{
array[1].vote++;
}
else if(inp == "wang")
{
array[2].vote++;
}
else
{
    error ++;
}
}
for(int i = 0;i<3 ; i++)
{
    cout<<array[i].name<<" "<<array[i].vote<<endl;
}
cout<<"Error"<<error<<endl;
return 0;
}
