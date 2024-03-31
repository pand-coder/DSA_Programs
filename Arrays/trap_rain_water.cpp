#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class solution{
    public:
    int getwater(int arr[],int n)
    {
        int lmax[n],rmax[n];
        int water=0;
        lmax[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            lmax[i]=max(arr[i],lmax[i-1]);
        }
        rmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rmax[i]=max(arr[i],rmax[i+1]);
        }

        for(int i=1;i<n-1;i++)
        {
            int var=min(lmax[i],rmax[i]);
            if(var>arr[i])
            {
                water+=var-arr[i];
            }
        }
        return water;
    }

};
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solution s;
    cout<<s.getwater(arr,n);
    return 0;
}
