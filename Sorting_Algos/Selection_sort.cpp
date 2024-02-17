// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    int arr[n];
        for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
    for(int i=0;i<n-1;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
        }
          swap(arr[i],arr[index]);
    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}
