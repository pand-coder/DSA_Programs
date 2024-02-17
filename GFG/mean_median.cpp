int median(int A[],int N)
    {
        
        sort(A,A+N);
        // N - size
        if(N%2!=0)
        {
            return A[N/2];
        }
        else
        {
            return (A[(N/2)-1]+A[N/2])/2;
        }
        
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
        }
        float mean=sum/N;
        return floor(mean);
    }
};
