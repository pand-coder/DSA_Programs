#include<iostream>
using namespace std;
class Array{
    int n;
    public:
    int arr[n];
    Array(int num)
    {
        n=num;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    }
    
    void add_element_at_beginning(int arr[],int n,int element)
    {
        for(int i=0;i<n;i++)
        {
            a[i+1]=a[i];
        }
        
        a[0]=element;
    }
    
    void add_element_at_end(int arr[],int n,int element)
    {
        arr[n]=element;
        n++;
    }
    
    void insert_at_kth_position(int arr[],int n,int position)
    {
        if(k>0 && k<n)
        {
            for(int i=0;i<n;i++)
            {
                arr[i+1]=arr[i];
            }
        }
        arr[position]=element;
    }
    
    void delete_at_begin(int arr[])
    {
        for(int i=0;i<n;i++)
        {
            
        }
    }
    
    
}
