class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp.insert(nums[i]);
        }
        for(int i = 1; i <= nums.size() + 1; i++) 
        {
            if(mp.count(i) == 0)
            return i;
        }

        return -1;

    }
};