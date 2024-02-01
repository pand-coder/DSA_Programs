#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n],i,temp=0,j;
    cout<<"Enter ELements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        j=i-1;
    while(j>=0 && a[j]>temp)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
    }
    cout<<"Sorted array:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
