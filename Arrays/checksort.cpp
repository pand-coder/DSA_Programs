#include<iostream>
using namespace std;
bool checkarraysort(int arr[],int n)
{
    int i=0;
    if(n==0 || n==1)
        return true;
    for(i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool a=checkarraysort(arr,n);
    if(a)
    {
        cout<<"Array is sorted in ascending order";
    }
    else
    {
        cout<<"Array is not sorted";
    }
    return 0;
}
