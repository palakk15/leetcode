class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
    unordered_map<int,int>mp;
    int maxi=0;
    int ans=0;
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
        maxi=max(maxi,mp[nums[i]]);
    }
    for(auto it:mp)
    {
        if(it.second==maxi)
        {
            ans=ans+it.second;
        }
    }
    return ans;
    }
};