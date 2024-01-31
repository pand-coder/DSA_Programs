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
    int element,flag=0;
    cout<<"Enter Element:";
    cin>>element;
    for(int i=0;i<n;i++)
    {
        if(element==a[i])
        {
            flag=1;
            cout<<"Element is found at index:"<<i<<endl;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Element is not found"<<endl;
    }
return 0;
}
