#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    
    int res = 0; // Initialize the result to 0
    
    // Loop until n becomes 0
    while (n > 0) {
        // Check if the last bit is 1
        if (n % 2 != 0) {
            res++; // Increment the result if the last bit is 1
        }
        // Right shift n by 1 to discard the last bit
        n = n >> 1;
    }
    
    cout<<"Number of set bits in "<<n<<" is "<<res<<endl;

    return 0;
}
