#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the number of elements to be in array:";
cin>>n;
if(n<=0 && n<2)
{
cout<<"There should be atleast two elements"<<endl;
return 0;
}
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int le=arr[0];
int sle=arr[1];
int index=0;
if(sle>le)
{
swap(le,sle);
}
for(int i=0;i<n;i++)
{
if(arr[i]>le)
{
sle=le;
le=arr[i];
index=i;
}
else if(arr[i]>sle && le!=arr[i])
{
sle=arr[i];
cout<<sle<<endl;
}
}
cout<<"Element is present at index:<<index<<endl;
cout<<"The second largest element of the array:"<<sle<<endl;
return 0;
}
