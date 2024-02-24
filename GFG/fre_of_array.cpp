#include <iostream>
using namespace std;
void freqofelements(int arr[],int n)
{
    int freq=1,i;
    for(i=1;i<n;i++)
    {
        if(arr[i]=arr[i-1])
        {
            freq++;
        }
        else
        {
             cout << arr[i - 1] << " appeared " << freq << " times" << endl;
            freq=1;
        }
    }
     cout << arr[i - 1] << " appeared " << freq << " times" << endl;
       if(n==1||arr[n-1]!=arr[n-2])
     {
       cout << arr[i - 1] << " appeared " << freq << " times" << endl;   
     }
     
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    freqofelements(arr,n);
    return 0;
}
