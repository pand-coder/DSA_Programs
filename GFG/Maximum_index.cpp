class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { int maxindex=0;
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>i;--j)
            {
                if(a[j]>a[i])
                {
                    int temp=j-i;
                    maxindex=max(temp,maxindex);
                }
            }
            
        }
        return maxindex;
    }
};
