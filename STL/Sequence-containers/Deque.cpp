#include<iostream>
#include<deque> 
using namespace std;
int main()
{
    deque<int>deq;
    deq.push_front(2);
    deq.push_back(4);
    //deq.pop_back(); // 4 gone 
    //deq.pop_front(); // 3 gone 
    cout<<"First Index Element->"<<deq.at(1)<<endl;
    cout<<"Front Element->"<<deq.front()<<endl; 
    cout<<"Back Element->"<<deq.back()<<endl; 
    cout<<"Empty or not:"<<deq.empty()<<endl; // 0- false & 1 - true 
    // starting iterator -> .begin()
    //  last iterator - .end()
    cout<<"Before Erase:"<<deq.size()<<endl;
    deq.erase(deq.begin(),deq.begin()+1); 
    cout<<"After Erase:"<<deq.size()<<endl;
    return 0;
}

