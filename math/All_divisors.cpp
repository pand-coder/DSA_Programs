#include<iostream>
using namespace std;
void printdivisors(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
           cout<<i<<endl; 
        }
    }
}
int main()
{
    int n;
    cin>>n;
    printdivisors(n);
    return 0;

}
