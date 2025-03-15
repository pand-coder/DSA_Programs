/*
You are given two 2D integer arrays nums1 and nums2.

nums1[i] = [idi, vali] indicate that the number with the id idi has a value equal to vali.
nums2[i] = [idi, vali] indicate that the number with the id idi has a value equal to vali.
Each array contains unique ids and is sorted in ascending order by id.

Merge the two arrays into one array that is sorted in ascending order by id, respecting the following conditions:

Only ids that appear in at least one of the two arrays should be included in the resulting array.
Each id should be included only once and its value should be the sum of the values of this id in the two arrays. If the id does not exist in one of the two arrays, then assume its value in that array to be 0.

Return the resulting array. The returned array must be sorted in ascending order by id.

 */

/*
There are two ways to solve this problem 

1.) two pointers as sorted data and merging factor 

2.) use a map to store as key value pair and updating the value according to the key of nums1 and nums2 
*/
/*
//1.) 

//Time Commplexity : O(n+m)
//Space Complexity : O(n+m)
*/

class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            int i=0,j=0;
            vector<vector<int>>res;
            int m=nums1.size();
            int n = nums2.size();
            while(i<m && j<n)
            {
                if(nums1[i][0]<nums2[j][0])
                {
                    res.push_back(nums1[i]);
                    i++;
                }
                else if(nums1[i][0]>nums2[j][0])
                {
                    res.push_back(nums2[j]);
                    j++;
                }
                else
                {
                    res.push_back({nums1[i][0],nums1[i][1]+nums2[j][1]});
                    i++;
                    j++;
                }
            }
            while(i<m)
            {
                res.push_back(nums1[i]);
                i++;
            }
    
            while(j<n)
            {
                res.push_back(nums2[j]);
                j++;
            }
            return res;
        }
    };

    /*
//2
Time Complexity : O(n+m)
where n is the number of elements in `nums1` and m is the number of elements in `nums2`. This is because the solution iterates through each of the input arrays once to populate the `Merger` map, and then it iterates through the map to construct the result vector. The operations of inserting and updating values in the map are average O(1) due to the underlying hash table implementation.

Space complexity : O(K)
 where k is the number of unique keys in the merged arrays. This is because the `Merger` map stores each unique key from both input arrays along with its corresponding sum. The result vector `res` will also take O(k) space to store the final output.


class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            //check for two pointer soln in prev submission 
            map<int,int>Merger;
            for(auto &v : nums1)
            {
                Merger[v[0]] = Merger[v[0]]+v[1];
            }
            for(auto &v:nums2)
            {
                Merger[v[0]]=Merger[v[0]]+v[1];
            }
    
            vector<vector<int>>res;
            for(auto &[key,val]:Merger)
            {
                res.push_back({key,val});
            }
            return res;
        }
    };

    */
