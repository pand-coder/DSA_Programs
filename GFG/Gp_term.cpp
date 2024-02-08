class Solution{
    public:
        //Complete this function
    double termOfGP(int A,int B,int N)
    {
        double r=(double)B/A;   //R=T2/T1
        return A*pow(r,N-1);
    }
};
