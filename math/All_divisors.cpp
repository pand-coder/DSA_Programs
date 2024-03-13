#include<iostream>
#include<cmath>
using namespace std;
void printdivisors(int n)
{
    for(int i=1; i <= sqrt(n); i++)
    {
        if(n%i==0)
        {
           cout<<i<<endl; 
           if (i != n/i) // Print the other divisor if it's different
               cout << n / i << endl;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    printdivisors(n);
    return 0;

}
