#include<iostream>
using namespace std;
int smallest_element(int n,int arr[])
{
     int se=arr[0];
    for(int j=0;j<n;j++)
    {
        if(arr[j]<se)
        {
            se=arr[j];
            
        }
    }
    return se;
}
int largest_element(int n,int arr[])
{
     int le=arr[0];
    for(int k=0;k<n;k++)
    {
        if(arr[k]>le)
        {
            le=arr[k];
        }
    }
return le;
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
    int small=smallest_element(n,arr);
    int large=largest_element(n,arr);
    cout<<"The smallest element of the array is:"<<small<<endl;
    cout<<"The Largest element of the array is:"<<large<<endl;
    return 0;
}
