#include<iostream>
using namespace std;

int add(int x, int y); 
float add(float x, float y); 
double add(double x, double y); 

class Addition {
public :
int add(int x,int y)
{
	return x+y;
}
float add(float x,float y)
{
	return x+y;
}
double add(double x,double y)
{
	return x+y;
}
};

int main()
{
	Addition obj;
	int x1,y1;
	cin>>x1>>y1;
	cout<<"Integer Addition: "<<obj.add(x1,y1)<<endl;
	float x2,y2;
	cin>>x2>>y2;
	cout<<"Float Addition: "<<obj.add(x2,y2)<<endl;
	double x3,y3;
	cin>>x3>>y3;
	cout<<"Double Addition: "<<obj.add(x3,y3)<<endl;
	return 0;
}