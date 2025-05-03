//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(const vector<int>& arr) {
    for (int num : arr)
        printf("%d ", num);
    printf("\n");
}


// } Driver Code Ends

class Solution {
  public:
    // Function to sort an array using quick sort algorithm.
    void qs(vector<int>&arr,int low,int high)
    {
        if(low<high)
        {
            int partition_index = partition(arr,low,high);
            qs(arr,low,partition_index-1);
            qs(arr,partition_index+1,high);
        }
    }
    void quickSort(vector<int>& arr, int low, int high) {
        qs(arr,0,arr.size()-1);
        
    }

  public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low];
        int i = low;
        int j = high;
        while(i<j)
        {
            while(arr[i]<=pivot && i<=high)
            {
                i++;
            }
            
            while(arr[j]>pivot && j>=low)
            {
                j--;
            }
            
            if(i<j)
            {
                swap(arr[i],arr[j]);
            }
            
        }
        swap(arr[low],arr[j]);
        return j;
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    scanf("%d", &T);
    getchar(); // to consume newline after T

    while (T--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.quickSort(arr, 0, arr.size() - 1);
        printArray(arr);
    }

    return 0;
}

// } Driver Code Ends
