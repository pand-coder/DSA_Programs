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
    int element;
    cout<<"Enter element:";
    cin>>element;
    int l=0,r=n-1,mid=0;
    while(l<=r)
    {
    mid=(l+r)/2;
    if(element==a[mid])
    {
        cout<<"Element found at index:"<<mid<<endl;
        return 0;
    }
    else if(element<a[mid])
    {
        r=mid-1;
    }
    else 
    {
        l=mid+1;
    }
}
cout<<"Element not found"<<endl;
 return 0;
}
