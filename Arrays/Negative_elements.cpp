#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Negative elements are: ";
     for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
        cout<<arr[i]<<" ";
        }
    }
    
    return 0;
}
