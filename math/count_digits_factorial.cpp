class Solution{
    public:
    int digitsInFactorial(int N)
    {
        double count=1;
        for(int i=1;i<=N;i++)
        {
            count=count+log10(i);
        }
    
        return count;
    }
};
