#include <iostream>
#include<vector>
using namespace std;

    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    vector<int>prefix(n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    
    vector<int>suffix(n);
    suffix[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i++)
    {
        suffix[i]=suffix[i+1]+arr[i];
    }
    return 0;
}
