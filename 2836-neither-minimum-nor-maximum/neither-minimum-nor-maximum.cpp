class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        set<int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp.insert(nums[i]);
        }
        vector<int> ans(mp.begin(),mp.end());
        if(ans.size() < 3) 
        {
            return -1;
        }

        return ans[ans.size()-2];
        
    }
};