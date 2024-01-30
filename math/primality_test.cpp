class Solution{
    public:
        bool isPrime(int N)
    {
        if(N==1)
        {
            return false;
        }
        else if(N==2||N==3)
        {
            return true;
        }
        else if(N%2==0 || N%3==0)
        {
            return false;
        }
     for(int i=5; i*i<=N + 1;i+=6)
    {
        if (N % i == 0||N % (i + 2) == 0||N % (i * i) == 0)
        {
            return false;
        }
    }

        return true;
    }

};
