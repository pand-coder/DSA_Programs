class Solution{
    public:
    bool isPrime(int N){
        if(N<=1)
            return false;
        if(N==2||N==3)
        {
            return true;
        }
        if(N%2==0||N%3==0)
        {
            return false;
        }
        for(int i=2;i*i<=N;i++)
            if(N%i==0)
                return false;
        return true;
    }
    int exactly3Divisors(int N){
        int c=0;
        for(int i=2; i*i<=N; i++){
            if(isPrime(i)){
                c++;
            }
        }
        return c;
    }
};
