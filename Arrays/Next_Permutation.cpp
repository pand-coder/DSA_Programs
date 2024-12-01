/*
Next Permutation
Difficulty: MediumAccuracy: 40.66% Submissions: 169K+Points: 4
Given an array of integers arr[] representing a permutation, implement the next permutation that rearranges the numbers into the lexicographically next greater permutation. If no such permutation exists, rearrange the numbers into the lowest possible order (i.e., sorted in ascending order). 

Note - A permutation of an array of integers refers to a specific arrangement of its elements in a sequence or linear order.

Examples:

Input: arr = [2, 4, 1, 7, 5, 0]
Output: [2, 4, 5, 0, 1, 7]
Explanation: The next permutation of the given array is {2, 4, 5, 0, 1, 7}.
Input: arr = [3, 2, 1]
Output: [1, 2, 3]
Explanation: As arr[] is the last permutation, the next permutation is the lowest one.
Input: arr = [3, 4, 2, 5, 1]
Output: [3, 4, 5, 1, 2]
Explanation: The next permutation of the given array is {3, 4, 5, 1, 2}.
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105
*/

/*Brute force Method 

Generate all permuations of the array 
linear search the array and find the given permutation of array
return the next permuation if there otherwise if it's last permutation then return the first permutation as it's like a cycle 

Time complexity : O(N! * N)

next_permutation(arr.begin(), arr.end());
std::next_permutation:

This function rearranges the elements in the range [arr.begin(), arr.end()) into the next lexicographical permutation.
If the current permutation is the last permutation, it rearranges the range into the first permutation (sorted in ascending order).
The function works in 
O(n) time.

*/