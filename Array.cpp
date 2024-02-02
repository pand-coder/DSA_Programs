#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4> arr={1,2,3,4};
    int size=arr.size();
    cout<<"size:"<<size<<endl;
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Element at 3rd index->"<<arr.at(3)<<endl; // at operation
    cout<<"Empty or not->"<<arr.empty()<<endl;

    cout<<"First Element->"<<arr.front()<<endl; 
    cout<<"Last ELement->"<<arr.back()<<endl;
    return 0;
}