class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        long long c=1000000007;
        return ((a%c)+(b%c))%c;
    }
};
