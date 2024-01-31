#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pos;
    cout<<"Enter the position of the element:";
    cin>>pos;
    if(pos<0 || pos>n)
    {
        return 0;
    }
    int element;
    cout<<"Enter the element:";
    cin>>element;
    for(int i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=element;
    for(int i=0;i<n+1;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
