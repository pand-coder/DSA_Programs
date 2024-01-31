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
    for(int i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
