#include <iostream>
using namespace std;
int findOdd(int arr[], int n) {
    int res = arr[0];
    for (int i=1;i<n;i++)
    {
        res = res^arr[i];
    }
    return res;
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
          cin >> arr[i];
    }
    int res = findOdd(arr, n);
    cout << "Result: " << res;
    return 0;
}
