#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"\n Enter Elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Subarrays of the array are:"<<endl;
    for (int size = 1; size <= n; ++size) 
    {
        for(int i = 0;i<=n-size;++i)
        {
            for (int j=i;j<i+size;++j)  
            {
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
