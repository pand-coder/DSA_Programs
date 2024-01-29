#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(n!=0)
    {
        n=n/10;
        count=count+1;
    }
cout<<count<<endl;
return 0;
}
