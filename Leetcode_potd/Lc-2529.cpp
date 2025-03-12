/*
https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/?envType=daily-question&envId=2025-03-12
*/

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int posc=0;
        int negc=0;
        for(int a:nums)
        {
            if(a>0)
            {
                posc++;
            }
            else if(a<0)
            {
                negc++;
            }
            else
            {
                continue;
            }
        }
        int res;
        if(posc>negc)
        {
            res=posc;
        }
        else
        {
            res=negc;
        }
        return res;
    }
};
