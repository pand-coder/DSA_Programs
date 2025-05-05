#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int n, int m, vector<int>& arr1, vector<int>& arr2) {
    int i=0,j=0;
    vector<int>res;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j]) //Filling all elements unique elements of arr1 until sizeoff arr2
        {
            if(res.empty()|| res.back()!=arr1[i])
            {
                res.push_back(arr1[i]);
            }
            i++;
        }
        
        else if(arr1[i]>arr2[j])
        {
            if(res.empty()||res.back()!=arr2[j])
            {
                res.push_back(arr2[j]);
            }
            j++;
        }
        
        else
        {
            if(res.empty()||res.back()!=arr1[i])
            {
                res.push_back(arr1[i]);
            }
            i++;
            j++;
            
        }
    }
    while(i<n)
    {
         if(res.empty()|| res.back()!=arr1[i])
            {
                res.push_back(arr1[i]);
            }
            i++;
    }
    
    while(j<m)
    {
         if(res.empty()||res.back()!=arr2[j])
            {
                res.push_back(arr2[j]);
            }
            j++;
    }
    
    return res;
    
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr1(n), arr2(m);

        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> arr2[i];
        }

        vector<int> result = findUnion(n, m, arr1, arr2);

        for (auto & val : result) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
