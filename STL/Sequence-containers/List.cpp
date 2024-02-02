#include<iostream>
#include<list>
using namespace std;
int main()
{
   list<int>l;
   list<int>n(5,100);
   cout<<"print n"<<endl;
   for (int i : n) {
        std::cout << i << " ";
    }cout<<endl;
   l.push_back(1);
   l.push_front(2);
   for (int i:l)
   {
    cout<<i<<" "<<endl;
   }
    l.erase(l.begin());
    cout<<"After Erase:"<<endl;
    for(int i:l)
    {
        cout<<i<<" "<<endl;

    }
    cout<<"Size of the list:"<<l.size()<<endl;
    return 0;
}
