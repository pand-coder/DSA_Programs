#include<iostream>
#include<map>
using namespace std;

int main() {
map<int,string>m;
m[1]="Pavan";
m[2]="Shanmukha";
m[14]="Gunda";
m.insert({7,"Madhav"});
cout<<"Before Erase:"<<endl;
for(auto i:m)
{
    cout<<i.first<<" "<<i.second<<endl;
}
cout<<"Find 19:"<<m.count(19)<<endl;
m.erase(7);
cout<<"After Erase:"<<endl;
for(auto i:m)
{
    cout<<i.first<<" "<<i.second<<endl;
}
auto it = m.find(5);
for(auto i=it;i!=m.end();)
{
    cout<<(*i).first<<endl;
}
return 0;
}
