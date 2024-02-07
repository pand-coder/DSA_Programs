#include <iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    set<int>s;
    for(int i=0;i<n;i++)
    {   cin>>arr[i];
        s.insert(arr[i]);
    }
    cout<<"Array:"<<endl;
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();++it)
    {
        cout<<*it<<" ";
    }
    return 0;
}
