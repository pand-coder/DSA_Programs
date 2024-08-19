/*
Time and Date
-----------------------
5:56 pm 
Monday
19 Aug 2024
-------------------------
Chapter : Searching 
Type : Medium 

Given an array arr. Find the majority element in the array. If no majority exists, return -1.

A majority element in an array of size n is an element that appears strictly more than n/2 times in the array.

Examples:

Input: arr[] = [3, 1, 3, 3, 2]
Output: 3
Explanation: Since, 3 is present more than n/2 times, so it is the majority element.
Input: arr[] = [7]
Output: 7
Explanation: Since, 7 is single element and present more than n/2 times, so it is the majority element.
Input: arr[] = [2, 13]
Output: -1
Explanation: Since, no element is present more than n/2 times, so there is no majority element.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ arr.size() ≤ 107
0 ≤ arr[i]≤ 106

*/
//Better approach using hashmap 
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size) {
        map<int,int>m;
        for(int i=0;i<size;i++)
        {
            m[arr[i]];
        }
        for(auto it: m)
        {
            if(it.second > size/2)
            {
                return it.first;
            }
        }
        return -1;
    }

};
//Optimal Approach - Boyer-Moore Voting Algorithm
class Solution {
  public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size) {
        int element;
        int count = 0;
        for(int i=0;i<size;i++) //traversing through the array 
        {
            if(count==0) // when count is 0 then intialize it with 1 and go on with that following element 
            {
                count=1;
                element = arr[i];
            }
            else if(arr[i]==element) // if the element is equal to the following elment then increment count
            {
                count++;
            }
            else // when they are not equal then  decrement the count 
            {
                count--;
            }
        }
        int count1=0;  // create a count variable to count the occurences of the majority elemenr 
        for(int i=0;i<size;i++) //traverse through the array 
        {
            if(arr[i]==element)  // check whether equal or not 
            {
                count1++;
            }
            
            if(count1 > size/2) // check the majority element condition 
            {
                return element;
            }
        }
        return -1;
    }
};
