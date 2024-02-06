  GNU nano 6.2                                                                                                                                                                                                                                                                                                                                                                                                                 equilibrium.cpp                                                                                                                                                                                                                                                                                                                                                                                                                           #include<iostream>
using namespace std;
int equilibrium(int arr[],int n)
{
int ls,rs;
for(int i=0;i<n;i++)
{
ls=0,rs=0;
for(int j=0;j<i;j++)
{
ls+=arr[j];
}
for(int j=i+1;j<n;j++)
{
rs+=arr[j];
}
if(ls==rs)
{
return i;
}
}
return -1;
}
int main()
{
int n;
cout<<"Enter the number of the elements:";
cin>>n;
if(n<0 || n==2)
{
cout<<"\nEnter valid size";
return 0;
}
else
{
int arr[n];
cout<<"Enter the array elements:";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
if(n==1)
{
cout<<"Array is having only element";
return 1;
}
int ei=equilibrium(arr,n);
if(ei!=-1)
{
cout<<"Equilibrium index found at"<<ei<<endl;
}
else
{
cout<<"No equilibrium index"<<endl;
}
}
return 0;
}
