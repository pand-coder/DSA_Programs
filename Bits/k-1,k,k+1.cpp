#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the kth bit position in n:"<<endl;
    int k;
    cin>>k;
    int x=0;
    int choice;
    cout<<"Enter the choice:"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
            x = (1 << k);   // checks for kth bit
            if((n & x) != 0)
            {
                cout << "Yes, the bit is set at " << k << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            break;

        case 2:
            x = (1 << (k - 1)); // checks for k-1th bit
            if((n & x) != 0)
            {
                cout << "Yes, the bit is set at " << k - 1 << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            break;

        case 3:
            x = (1 << (k + 1)); // checks for k+1 th bit
            if ((n & x) != 0)
            {
                cout << "Yes, the bit is set at " << k + 1 << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
    }

    return 0;
}
