class Solution{
    public:
        int multiplicationUnderModulo(long long a,long long b)
    {
        long long c = 1000000007;
        long long a1=a%c;
        long long b1=b%c;
        long long c1=(a1*b1)%c;
        return c1;
    }
};
