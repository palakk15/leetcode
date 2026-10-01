class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        mp[0]=-1;
        int ones=0;
        int zeros=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            ones--;

            else
            ones++;

            if(mp.find(ones)!=mp.end())
            zeros=max(zeros,i-mp[ones]);
            
            else
            mp[ones]=i;
        }
        return zeros;
    }
};