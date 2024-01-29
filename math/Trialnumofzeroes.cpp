#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
     cout<<"Enter Number:"<<endl;
     cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    int res=0;
    for(int i=5;i<=n;i*=5)
    {
        res=res+n/i;
    }
    cout<<"The Number of zeroes are:"<<res<<endl;
}
