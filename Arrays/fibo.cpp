#include <iostream>
using namespace std;
int main() {
 int n;
 cout<<"Enter the number:"<<endl;
 cin>>n;
 int arr[n];
 arr[0]=0;
 arr[1]=1;
 for(int i=2;i<n;i++)
 {
     arr[i]=arr[i-1]+arr[i-2];
 }
 cout<<"Fibonaaci Series:";
 for(int i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";
 }
    return 0;
}
