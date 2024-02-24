void rearrange(long long *arr, int n) 
    { 
    int mini=0;
    int maxi=n-1;
    int me=arr[n-1]+1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]=arr[i]+arr[maxi]%me*me;
            maxi--;
        }
        else
        {
            arr[i]=arr[i]+arr[mini]%me*me;
            mini++;
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]/me;
    }
    }
};
