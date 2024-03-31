class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::vector<int>::iterator it; 
        int res=0;
        for(it=nums.begin();it!=nums.end();++it)
        {
            res=res^*it;
        }
        return res;
    }
};
