#include<iostream>
using namespace std;
int removeDuplicates(int arr[],int n)
{
    int res=1;
    int dupcont=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
        else
        {
            dupcont++;
        }
       
    }
     return dupcont;
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
    int a=removeDuplicates(arr,n);
    cout<<a<<endl;;
    return 0;
}
