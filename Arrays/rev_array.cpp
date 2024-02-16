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
    cout<<"Elements in reversed order:";
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

// Another Approach


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
     int n;
    cin>>n;
    int arr[n],temp[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=n-1;
    int j=0;
    while(i>=0)
    {
        temp[j]=arr[i];
        j++;
        i--;
    }
    for(int k=0;k<n;k++)
    {
        arr[k]=temp[k];
    }
cout<<"Array elements after reversing:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}
