#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size of array:";
    cin>>n;
    int arr[n];
    int count=0;
    int modefreq=0;
    cout<<"Enter the element to check the frequency:"<<endl;
    cin>>modefreq;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;++i)
    {
        if(arr[i]==modefreq)
        {
         count++;   
        }
    }
    cout<<"The occurence of element is:"<<count;
