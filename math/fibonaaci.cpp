#include<iostream>
using namespace std;
int fibo(int n)
{
if(n==0 || n==1)
{
    return n;
}
else
{
    return fibo(n-1)+fibo(n-2);
}
}
void displayseq(int n)
{
    cout<<"Fibonaaci sequence upto term:"<<n<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<fibo(i)<<endl;
    }

}
int main()
{
    int n;
    cin>>n;
    displayseq(n);
    int res=fibo(n);
    cout << "The value of the " << n << "th term is: " << res << endl;
return 0;
}
