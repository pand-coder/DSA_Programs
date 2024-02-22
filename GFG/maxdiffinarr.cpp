#include<iostream>
using namespace std;

void maxdiffinarr(int arr[], int n)
{
    int maxDiff = -1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                int diff = arr[j]-arr[i]; //arr[j]>arr[i] such that j>i;
                if(diff > maxDiff)
                {
                    maxDiff = diff;
                }
            }
        }
    }
    if(maxDiff == -1)
    {
        cout<<"No such element found"<<endl;
    }
    else
    {
        cout<<"Maximum difference is: "<<maxDiff<<endl;
    }
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
    maxdiffinarr(arr, n);
    return 0;
}


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

