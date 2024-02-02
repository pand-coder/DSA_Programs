#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec; // use this intialization method when you don't know the size of the vector
    vector<int>a(5,1); //5 -> size of the vector 1- intialize all the lements in the vector with 1.
    for(int i:a)        //Range based loop -> for each integer 'i' in vector 'a', print 'i'
    {
        cout<<i<<" ";
    }cout<<endl;
    vector<int>last(a); // created a last vector which has all the elements of a 
    for(int i:last)
    {
        cout<<i<<" ";
    }cout<<endl;
    vec.push_back(2); // adds the element at the last 
    vec.push_back(4);
    vec.push_back(6);
    vec.push_back(8);
    vec.push_back(10);
    vec.push_back(12);
    cout<<"Size:"<<vec.size()<<endl; // size - displays the size of total number of elements
    cout<<"Capacity:"<<vec.capacity()<<endl; // capacity - defines the space that has been allocated for total number of elements
    cout<<"Element at 2nd index:"<<vec.at(2)<<endl;
    cout<<"First Element->"<<vec.front()<<endl; // First element of vector 
    cout<<"Second ELement->"<<vec.back()<<endl; // Last element of vector
     int size=vec.size();
    cout<<"Before pop"<<endl;
     for(int i=0;i<size;i++)
    {
        cout<<vec[i]<<endl;
    }
    vec.pop_back();  // removes the element at the last
    size=vec.size();
    cout<<"After Pop:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<vec[i]<<endl;
    }
    cout<<"Before clear:"<<vec.size()<<endl;
    vec.clear();
    cout<<"After clear:"<<vec.size()<<endl;
     if (vec.empty()) {
        cout << "Vector is empty." << std::endl;
    } else {
        cout << "Vector is not empty." << std::endl;
    }
    return 0;
}
