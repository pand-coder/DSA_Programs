#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the sequence:";
    cin >> n;
    int sequence[n];
    cout << "Enter the sequence elements:";
    for (int i=0;i<n;i++)
    {
        cin >> sequence[i];
    }
    int nq;
    cout << "Enter the number of queries:";
    cin >> nq;
    for (int i=0;i<nq;i++)
    {
        int l,r;
        cout << "Enter the range for query from 0:" <<i + 1;
        cin >>l>> r;
        int sum = 0;
        for(int j=l;j<=r;j++)
        {
            sum+=sequence[j];
        }
        cout <<"Output for query"<< i + 1 <<":"<<sum<<endl;
    }
    return 0;
}
