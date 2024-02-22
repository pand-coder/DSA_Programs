#include<iostream>
#include<algorithm>
using namespace std;

int maxdiffinarr(int arr[],int n)
{
    int res=arr[1]-arr[0];
    int minval=arr[0];
    for(int i=1;i<n;i++)
    {
        res=max(res,arr[i]-minval);
        minval=min(minval,arr[i]);
    }
    return res;
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
    cout << maxdiffinarr(arr, n) << endl;
    return 0;
}
