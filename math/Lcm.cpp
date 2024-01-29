#include<iostream>
using namespace std;
int gcd(int a,int b)
{
if(b==0)
{
    return a;
}
else
{
    return gcd(b,a%b);
}
}
int main()
{
    int a,b,lcm=0;
    cin>>a>>b;
    int result=gcd(a,b);
    lcm=a*b/result;
    cout<<"LCM:"<<lcm<<endl;
}
