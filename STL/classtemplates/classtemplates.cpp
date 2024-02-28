#include<iostream>
using namespace std;
template<typename T>
class weight
{
        T kg;
        public:
        void setdata(T x)
        {
                kg=x;
        }
        T getdata()
        {
                return kg;
        }
};
int main()
{
        weight <int>w;
        w.setdata(5);
        cout<<"Value is:"<<w.getdata()<<endl;

        weight <double>w1;
                w.setdata(5);
                cout<<"Value is:"<<w1.getdata()<<endl;
        