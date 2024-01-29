#include<iostream>
using namespace std;
int Factorial_iterative(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int Factorial_recursive(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n<0)
    {
        return -1;
    }
    else
    {
        return n*Factorial_recursive(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int iter = Factorial_iterative(n);
    int rec = Factorial_recursive(n);
    cout<<iter<<endl;
    cout<<rec<<endl;
return 0;
}
