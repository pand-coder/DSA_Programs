class Solution
{
    public:
    //Function to find the first position with different bits.
    int getRightMostsetbit(int m,int n)
    {
        int res=m^n;
        
        
        if(res==0)
        {
            return -1;
        }
        
        return log2(res & -res)+1;
    }
    
    int posOfRightMostDiffBit(int m, int n)
    {
        
        return getRightMostsetbit(m,n);
    }
};
