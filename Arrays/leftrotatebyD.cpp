#include<iostream>
using namespace std;
void leftrotatebyD(int arr[],int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++)
    {
        arr[n-d+i]=temp[i];
    }
}
int main()
{
    int n, d;
    cout << "Enter number of elements:" << endl;
    cin >> n;

    // Use dynamic memory allocation to create the array
    int* arr = new int[n];

    cout << "Enter elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter d:";
    cin >> d;
    leftrotatebyD(arr, n, d);

    // Output the rotated array
    cout << "Rotated array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}
