#include <iostream>
using namespace std;

int power(int x,int n) // x^n (x - number , n- number)
{int p=1;
    if(x==0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    if(x>0 && n>0)
    {
       //return  power(p,x)
        
        for(int i=1;i<=n;i++) //Iterative
        {
            p=p*x;
        }
    
    }
    return p;

}
int main()
{
    int x,n;
    cout<<"Enter the number:"<<endl;
    cin>>x;
    cout<<"Enter the Exponent:"<<endl;
    cin>>n;
    int res=power(x,n);
    cout<<res<<endl;
    return 0;
}
